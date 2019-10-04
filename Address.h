#pragma once
#include "Area.h"
using namespace std;
class Address {
public:
	wstring Ori, prov, downtown, region, street, road, number, build;
	int provtype, Ty;
	Address(){}
	Address(wstring __str,int __ty) {
		prov = downtown = region = street = road= number= build =L"";
		Ori = __str;
		Ty = __ty;
	}
	void Classification();
	void doit();
	void print();
	void GetAns(vector<wstring> &);
};