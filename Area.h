#pragma once
#include<string>
#include<iostream>
#include <vector>
#include<cstdio>
#include<locale>
#include <codecvt>
#include<fstream>
#include <cstdlib>
using namespace std;

namespace Area {
	std::wstring province[];
	extern vector <wstring> city;
	//std::wstring rprovince[];
	int type[];
	void init();
	string UnicodeToUTF8(const wstring&);
	wstring UTF8ToUnicode(const string&);
}