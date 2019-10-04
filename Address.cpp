#include"Address.h"

void Address::Classification() {
	wstring s = Ori;
	/*ofstream fout("2.txt");
	for (int i = 0; i < (int)s.size();i++) {
		fout << i << ' ';
		wstring str = s.substr(i, 1);
		fout << Area::UnicodeToUTF8(str) << "\n";
	}*/
	for (int i = 1; i <= 34; i++) {
		int pos = 0, f = 1, len = (int)Area::province[i].size();
		for (int j = 0; j < len; j++) {
			if (Area::province[i][j] != s[pos]) {
				f = 0;
				break;
			}
			pos++;
		}
		if (f) {
			prov = Area::province[i];
			int ty = Area::type[i];
			if (ty == 2) prov += L"自治区";
			else if (ty == 4) prov += L"省";
			provtype = ty;
			int t = len;
			if (s[t] == L'省') t++;
			else if (s[t] == L'市') t++;
			else {
				if (s[t + 1] == L'族') t += 2;
				if (s[t] == L'自' &&s[t+1]==L'治') t+=2;
				if (s[t] == L'区') t++;
			}
 			s = s.substr(t, (int)s.size() - t);
			break;
		}
	}
	if (provtype == 1) {
		downtown = prov + L'市';
	}else 
	for (int i = 0; i < 332; i++) {
		int pos = 0, f = 1, len = (int)Area::city[i].size();
		for (int j = 0,pos=0; j < len; j++) {
			if (Area::city[i][j] != s[pos]) {
				f = 0;
				break;
			}
			pos++;
		}
		if (f) {
			downtown = Area::city[i];
			int t = len;
			while (s[t + 1] == L'族' || s[t + 2] == L'族') {
				int o = 0;
				if (s[t + 2] == L'族') o++;
				downtown += s.substr(t, 2 + o);
				t += 2 + o;
			}
			if (i >= 332) {
				downtown += L'盟';
				if (s[t] == L'盟') t++;
			}
			else if (i >= 302) {
				downtown += L"自治州";
				if (s[t] == L'自' && s[t + 1] == L'治' && s[t + 2] == L'州') t += 3;
			}
			else if (i >= 296) {
				downtown += L"地区";
				if (s[t] == L'地' && s[t + 1] == L'区') t++;
			}
			else {
				downtown += L'市';
				if (s[t] == L'市') t++;
			}
			s = s.substr(t, (int)s.size() - t);
			break;
		}
	}
	int o = 5;
	for (int i = 0; i < (int)s.size() - o; i++)
		if (s[i] == L'区' || s[i] == L'县' || s[i]==L'市' || s[i] == L'旗') {
			region = s.substr(0, i + 1);
			s = s.substr(i + 1, (int)s.size() - i - 1);
			break;
		}
	for (int i = 0; i < (int)s.size() - o; i++)
		if (s[i] == L'镇' || (s[i] == L'街'&&s[i + 1] != L'镇') || (s[i] == L'道' && s[i + 1] != L'口') || s[i] == L'乡' || s[i] == L'村') {
			if (s[i] == L'街' && s[i + 1] == L'道') i++;
			street = s.substr(0, i + 1);
			s = s.substr(i + 1, (int)s.size() - i - 1);
			break;
		}
	if (Ty == 1) {
		Ori = s;
		return;
	}
	for (int i = 0; i < (int)s.size() - o; i++)
		if (s[i] == L'路' || s[i] ==L'巷' || s[i]==L'街' || s[i]==L'道') {
			road = s.substr(0, i + 1);
			s = s.substr(i + 1, (int)s.size() - i - 1);
			break;
		}
	if (road == L"") road = street, street = L"";
	for (int i = 0; i<(int)s.size(); i++)
		if (s[i] == L'号') {
			number = s.substr(0, i + 1);
			s = s.substr(i + 1, (int)s.size() - i - 1);
			break;
		}
	build = s;
	Ori = s;
}

void Address::print() {
	ofstream fout("2.txt");
	fout << Area::UnicodeToUTF8(prov) << "\n";
	fout << Area::UnicodeToUTF8(downtown) << "\n";
	fout << Area::UnicodeToUTF8(region) << "\n";
	fout << Area::UnicodeToUTF8(street) << "\n";
	fout << Area::UnicodeToUTF8(road) << "\n";
	fout << Area::UnicodeToUTF8(number) << "\n";
	fout << Area::UnicodeToUTF8(build) << "\n";
}

void Address::GetAns(vector<wstring> &ans) {
	ans.push_back(L"        \"地址\": [");
	wstring s = L"            \"", t = L"\",", tend = L"\"";
	ans.push_back(s + prov + t); 
	ans.push_back(s + downtown + t);
	ans.push_back(s + region + t);
	ans.push_back(s + street + t);
	if (Ty != 1) {
		ans.push_back(s + road + t);
		ans.push_back(s + number + t);
		ans.push_back(s + build + tend);
	}
	else ans.push_back(s + Ori + tend);
	ans.push_back(L"        ]");
}
void Address::doit() {
	Classification();
	//print();
}
