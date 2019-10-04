//#pragmaexecution_character_set("utf-8");
//#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<string>
#include<iostream>
#include<cstdio>
#include<locale>
#include"Address.h"
#include <codecvt>
#include<fstream>
#include <cstdlib>
using namespace std;
class People {
public :
	wstring Ori, name, address;
	Address one;
	wstring PhoneNumber;
	bool Type1, Type2, Type3;
	int ty;
	People(){}
	People(string __str, int __ty) {
		name = address = PhoneNumber = L"";
		Type1 = Type2 = Type3 = 1;
		ty = __ty;
		Ori = Area::UTF8ToUnicode(__str); 
		Ori = Ori.substr(2, (int)Ori.size() - 2);
	}
	People(wstring __str) {
		name = address = PhoneNumber = L"";
		Type1 = Type2 = Type3 = 1;
		Ori = __str;
	}
	void ClearPunctuation();
	void GetNumber();
	void GetAddress();
	void GetName();
	void Print();
	void GetAns(vector <wstring > &,int,int);
	void doit(vector <wstring > &,int,int);
};
