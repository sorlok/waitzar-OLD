/*
 * Copyright 2009 by Seth N. Hetu
 *
 * Please refer to the end of the file for licensing information
 */

#ifndef _INTERFACES
#define _INTERFACES

#include <string>
#include <map>

#include "Input/InputMethod.h"


//A struct... will refactor into separate classes later.
struct Encoding {
	Option<std::wstring> displayName;
	Option<std::wstring> initial;
	Option<std::wstring> imagePath;
};


class DummyInputMethod : public InputMethod { //Used to save option pairs.
public:
	std::map< std::wstring, Option<std::wstring> > options;

	//So many more... can't we do this better?
	void handleEsc() { throw std::exception("Not valid for DummyInputMethod."); }
	void handleBackspace() { throw std::exception("Not valid for DummyInputMethod."); }
	void handleDelete() { throw std::exception("Not valid for DummyInputMethod."); }
	void handleLeftRight(bool isRight) { throw std::exception("Not valid for DummyInputMethod."); }
	void handleCommit(bool strongCommit) { throw std::exception("Not valid for DummyInputMethod."); }
	void handleNumber(int numCode, WPARAM wParam) { throw std::exception("Not valid for DummyInputMethod."); }
	void handleStop(bool isFull) { throw std::exception("Not valid for DummyInputMethod."); }
	void typeHelpWord(std::string roman, std::wstring myanmar, int currStrDictID) { throw std::exception("Not valid for DummyInputMethod."); }
	std::pair<int, std::string> lookupWord(std::wstring typedWord) { throw std::exception("Not valid for DummyInputMethod."); }
	bool isPlaceholder() { throw std::exception("Not valid for DummyInputMethod."); }
	std::wstring getTypedSentenceString() { throw std::exception("Not valid for DummyInputMethod."); }
	std::wstring getSentencePreCursorString() { throw std::exception("Not valid for DummyInputMethod."); }
	void appendToSentence(wchar_t letter, int id) { throw std::exception("Not valid for DummyInputMethod."); }
	std::vector< std::pair<std::wstring, unsigned int> > getTypedCandidateStrings() { throw std::exception("Not valid for DummyInputMethod."); }
	void reset(bool resetCandidates, bool resetRoman, bool resetSentence, bool performFullReset) { throw std::exception("Not valid for DummyInputMethod."); }
};

//Expected interface: "Input Method"
class Transformation {
public:
	//Struct-like properties
	Option<std::wstring> fromEncoding;
	Option<std::wstring> toEncoding;
	Option<TYPES> type;

	//Convert from fromEncoding to toEncoding.
	//  The const references allow us to save processing if the source and destination are the same.
	const virtual std::wstring& convert(const std::wstring& src) = 0;
};

//Expected interface: "Display Method"
class DisplayMethod {
public:
	//Struct-like properties
	Option<std::wstring> encoding;
	Option<TYPES> type;

	//Temp for now: just force this to be virtual
	virtual void typeText() = 0;
};


//Expected interface: "Factory"   //Not necessary
/*class Factory {
public:
	//Builders for each other interface
	virtual InputMethod* makeInputMethod(std::wstring id, TYPES type, std::map<std::wstring, Option<std::wstring> > settings) = 0;
	virtual DisplayMethod* makeDisplayMethod(std::wstring id, TYPES type, std::map<std::wstring, Option<std::wstring> > settings) = 0;
	virtual Transformation* makeTransformation(std::wstring id, TYPES type, std::map<std::wstring, Option<std::wstring> > settings) = 0;
};*/



#endif //_INTERFACES

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
