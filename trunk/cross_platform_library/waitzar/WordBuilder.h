/*
 * Copyright 2007 by Seth N. Hetu
 *
 * Please refer to the end of the file for licensing information
 */

#ifndef _WORDBUILDER
#define _WORDBUILDER

//Don't let Visual Studio warn us to use the _s functions
#define _CRT_SECURE_NO_WARNINGS

//Ignore new swprintf semantics
#define _CRT_NON_CONFORMING_SWPRINTFS

//Necessary libraries
#include <wchar.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h> //strtol
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <limits>
#include "fontconv.h"

//I prefer to only shorthand STL components I use a lot, 
// rather than the whole namespace.
using std::string;
using std::vector;
using std::pair;
using std::map;



namespace waitzar
{

//Useful constants
enum ENCODING {
	ENCODING_UNICODE=1,
	ENCODING_ZAWGYI,
	ENCODING_WININNWA
};



/**
 * Used for converting a string of roman letters into a list of potential Burmese unsigned shorts.
 *  This class is intended for use in a Linux environment. Note that:
 *    "Before you start using UTF-8 under Linux make sure the distribution has glibc 2.2
 *     and XFree86 4.0 or newer versions. Earlier versions lack UTF-8 locale support and ISO10646-1 X11 fonts." ibm.com
 */
class WordBuilder
{
public:
	WordBuilder(char * model_buff, size_t model_buff_size, bool allowAnyChar);
	WordBuilder(const char* modelFile, const char* userWordsFile);
    WordBuilder(const char* modelFile, vector<string> userWordsFiles);
	WordBuilder(const vector< vector<unsigned short> > &dictionary, const vector< vector<unsigned int> > &nexus, const vector< vector<unsigned int> > &prefix);
	~WordBuilder(void);

	//State-changing functions. Use these to respond to keypresses.
	bool typeLetter(char letter);
	std::pair<bool, unsigned int> typeSpace(int quickJumpID);
	bool backspace();
	void reset(bool fullReset);
	bool moveRight(int amt);

	//Information on the model's state
	int getCurrSelectedID();
	std::vector<char> getPossibleChars(void);
	std::vector<unsigned int> getPossibleWords(void);
	void insertTrigram(unsigned short* trigram_ids, int num_used_trigrams);

	//Get information about a particular unsigned short given its ID
	vector<unsigned short> getWordKeyStrokes(unsigned int id);
	vector<unsigned short> getWordKeyStrokes(unsigned int id, unsigned int encoding);
	wchar_t* getWordString(unsigned int id);
	wchar_t* getParenString();
	wchar_t* getPostString();
	unsigned int getPostID();
	bool hasPostStr();

	//Some additional useful info
	unsigned short getStopCharacter(bool isFull);
	unsigned int getTotalDefinedWords();
	vector<char> reverseLookupWord(unsigned int dictID);
	bool addShortcut(wchar_t* baseWord, wchar_t* toStack, wchar_t* resultStacked);

	//Re-order the model
	bool addRomanization(wchar_t* myanmar, char* roman);
	bool addRomanization(wchar_t* myanmar, char* roman, bool ignoreDuplicates);

	//In case of error
	wchar_t* getLastError();

	//Change the encoding
	void setOutputEncoding(ENCODING encoding);
	ENCODING getOutputEncoding();

private:
	//Essential static data
	vector< vector<unsigned short> > dictionary;
	vector< vector<unsigned int> > nexus;
	vector< vector<unsigned int> > prefix;
	vector< vector<char> > revLookup;
	bool revLookupOn;

	//We could use a multimap of pairs, but I think a map of maps works better.
	// This is arranged as: nexus -> pre_word_id -> combined_word_id
	map<unsigned int, map<unsigned int, unsigned int> > shortcuts;

	//If true, filter words
	bool restrictToMyanmar;

	//Cached lookups
	vector< vector<unsigned short> > winInnwaDictionary;
	vector< vector<unsigned short> > unicodeDictionary;

	//Cached
	unsigned short punctHalfStopUni;
	unsigned short punctFullStopUni;
	unsigned short punctHalfStopWinInnwa;
	unsigned short punctFullStopWinInnwa;

	//Encoding of output text only
	ENCODING currEncoding;

	//Also, for expansion
	/*int dictMaxID;
	int dictMaxSize;
	int nexusMaxID;
	int nexusMaxSize;
	int prefixMaxID;
	int prefixMaxSize;*/

	//Tracking the current unsigned short
	unsigned int currNexus;
	unsigned int pastNexus[200];
	int pastNexusID;

	//Tracking previous unsigned shorts
	unsigned int trigram[3];
	unsigned int trigramCount;

	//Tracking user selection
	int currSelectedID;

	//Code for loading the model specifically from a variety of options, and the initialization code
	void loadModel(char * model_buff, size_t model_buff_size, bool allowAnyChar);
    void loadModel(const char* modelFile, std::vector<std::string> userWordsFiles);
    void loadModel(const vector< vector<unsigned short> > &dictionary, const vector< vector<unsigned int> > &nexus, const vector< vector<unsigned int> > &prefix);
	void initModel();

	//Internal stuff
	std::vector<char> possibleChars;
	std::vector<unsigned int> possibleWords;
	//std::vector<unsigned short> keystrokeVector;
	wchar_t currStr[200];

	//Extension: guessing the next bit
	wchar_t parenStr[100];
	wchar_t postStr[100];
	unsigned int postID;

	//For error messages
	wchar_t mostRecentError[200];

	//Internal functions
	void resolveWords(void);
	int jumpToNexus(int fromNexus, char jumpChar);
	int jumpToPrefix(int fromPrefix, int jumpID);
	bool vectorContains(std::vector<unsigned int> vec, unsigned int val);
	void addPrefix(unsigned int latestPrefix);
	void setCurrSelected(int id);
	void buildReverseLookup();
	unsigned int getWordID(wchar_t* wordStr);

};



size_t mymbstowcs(wchar_t *dest, const char *src, size_t maxCount);




/**
 * Read a line from a file. Yay! First template function!
 *  Note that this function automatically converts all upper case to lower case before checking.
 * NOTE: Template implementations must be defined in the same file they are declared; hence, this must be in the .h file.
 *       This is because Visual Studio does not support "export" on templates; otherwise, we could separate it.
 *       http://msdn.microsoft.com/en-us/library/4w5cfxs1.aspx
 * @param stream - TCHAR* or char*
 * @param index,streamSize - current position, max pos
 * @param nameRet, valRet The return strings for name/value pairs. Should be big enough to hold the name/value strings
 */
template <class T, class S>
void readLine(T* stream, size_t &index, size_t streamSize, bool nameHasASCII, bool nameHasMyanmar, bool nameHasSymbols, bool nameHasAny, bool valueHasASCII, bool valueHasMyanmar, bool valueHasSymbols, bool valueHasAnything, T* nameRet, S* valRet)
{
	//Init --note: 0x0000 is necessary, see:
	//http://msdn.microsoft.com/en-us/library/ms776431(VS.85).aspx
	//....er, actually, it should probably be \u0000; I think 0x00 would work. But no matter, really.
	nameRet[0] = (T)0x0000;
	valRet[0] = (S)0x0000;

	//Left-trim
	while (stream[index] == ' ')
		index++;

	//Comment? Empty line? If so, skip...
	if (stream[index]=='#' || stream[index]=='\n') {
		while (stream[index] != '\n')
			index++;
		index++;
		return;
	}

	//Start reading "name" and "value"
	int name_pos = 0;
	int value_pos = 0;
	bool nameDone = false;
	bool hasASCII = nameHasASCII;
	bool hasMyanmar = nameHasMyanmar;
	bool hasSymbols = nameHasSymbols;
	T currChar;
	T prevCaseChar;
	while (index<streamSize) {
		if (stream[index] == '\n') {
			//Done
			index++;
			break;
		} else if (stream[index] == '=') {
			//Switch modes
			nameDone = true;
			hasASCII = valueHasASCII;
			hasMyanmar = valueHasMyanmar;
			hasSymbols = valueHasSymbols;
		} else if (stream[index]!=' ') {
			//Convert to lowercase
			currChar = (T)stream[index];
			prevCaseChar = currChar;
			if (currChar>='A' && currChar<='Z')
				currChar += ('a'-'A');

			//Check if it's valid
			if (
			   (hasASCII==true && currChar>='a' && currChar<='z') ||
			   (hasMyanmar==true && currChar>=(T)0x1000 && currChar<=(T)0x109F) ||
			   (hasSymbols==true && (currChar=='_' || currChar=='!' || currChar=='^' || currChar=='+' || currChar=='.' || currChar=='-')) ||
			   (nameDone==true && valueHasAnything==true) ||
			   (nameDone==false && nameHasAny==true)
			   ) {
				  //This test exists for hotkey configurations
				  if (hasSymbols==true)
				    currChar = prevCaseChar;

				  //Add it
				  if (nameDone==false)
					nameRet[name_pos++] = currChar;
				  else
					valRet[value_pos++] = (S)currChar;
			}
		}

		//Continue
		index++;
	}

	//Append & return
	nameRet[name_pos] = (T)0x0000;
	valRet[value_pos] = (S)0x0000;
}


} //End waitzar namespace


#endif //_WordBUILDER



/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

