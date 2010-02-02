/*
 * Copyright 2009 by Seth N. Hetu
 *
 * Please refer to the end of the file for licensing information
 */

#include "WZFactory.h"

using std::map;
using std::wstring;
using std::vector;
using std::pair;


WZFactory::WZFactory(void)
{
}


WZFactory::~WZFactory(void)
{
}

InputMethod* WZFactory::makeInputMethod(const std::wstring& id, const std::map<std::wstring, std::wstring>& options)
{
	InputMethod res = NULL;

	//Check some required settings 
	if (options.count(L"type")==0)
		throw std::exception("Cannot construct input manager: no \"type\"");
	if (options.count(L"encoding")==0)
		throw std::exception("Cannot construct input manager: no \"encoding\"");
	if (options.count(sanitize_id(L"display-name"))==0)
		throw std::exception("Cannot construct input manager: no \"display-name\"");

	//First, the type is important
	if (res.type == L"builtin") {
		//Built-in types are known entirely by our core code
		vector< pair<int, unsigned short> > temp; //TODO: Remove
		if (id==L"waitzar")
			res = new WaitZar(temp);
		else if (id==L"mywin")
			res = new WaitZar(temp); //TODO: Change!
		else
			throw std::exception("Invalid \"builtin\" Input Manager.");
		res.type = BUILTIN;
	} else {
		throw std::exception("Invalid \"type\" for Input Manager.");
	}

	//Now, add general settings
	res.id = id;
	res.displayName = options[sanitize_id(L"display-name")];
	res.encoding = options[L"encoding"];

	//Return our resultant IM
	return res;
}


DisplayMethod* WZFactory::makeDisplayMethod(std::wstring id, TYPES type, std::map<std::wstring, Option<std::wstring> > settings)
{
	//For now
	return new PngFont();
}


Transformation* WZFactory::makeTransformation(std::wstring id, TYPES type, std::map<std::wstring, Option<std::wstring> > settings)
{
	//For now
	return new Zg2Uni();
}

Encoding WZFactory::makeEncoding(const std::wstring& id, const std::map<std::wstring, std::wstring>& options)
{
	//For now.
	return Encoding();
}

//Move this later
std::wstring WZFactory::sanitize_id(const std::wstring& str)
{
	return ConfigManager::sanitize_id(str);
}





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