#include "People.h"
string s[2005];
int main(int argv, char **argc) {
	if (argv < 3) return 0;
	ifstream fin;
	fin.open(argc[1]);
	ofstream fout;
	fout.open(argc[2]);
	//locale china("chs"); wcin.imbue(china); wcout.imbue(china);
	Area::init();
	int n,cnt=0;
	vector < wstring > ans;
	ans.push_back(L"[");
    while(fin>>s[++cnt]);
	cnt--;
    n=cnt;
	for(int i=1;i<=n;i++) {
        string str =s[i];
		int t1 = str[0] - '0';
		//str=str.substr(2,(int)str.size() - 2);
		People t = People(str, t1);
		t.doit(ans,i,n);
	}
	ans.push_back(L"]");
	for (int i = 0; i < (int)ans.size(); i++) {
		fout << Area::UnicodeToUTF8(ans[i]) << "\n";
	}
	fin.close();
	fout.close();
	//t.Print();
	return 0;
}
/*
int main() {
	ifstream fin("1.txt");
//	fin.open("1.txt");
	ofstream fout("2.txt");
//	fout.open("2.txt");
	//locale china("chs"); wcin.imbue(china); wcout.imbue(china);
	Area::init();
	int n, cnt = 0;
	vector < wstring > ans;
	ans.push_back(L"[");
	while (fin >> s[++cnt]);
	cnt--;
	n = cnt;
	for (int i = 1; i <= n; i++) {
		string str = s[i];
		int t1 = str[0] - '0';
		//str = str.substr(2, (int)str.size() - 2);
		People t = People(str, t1);
		t.doit(ans, i, n);
	}
	ans.push_back(L"]");
	for (int i = 0; i < (int)ans.size(); i++) {
		fout << Area::UnicodeToUTF8(ans[i]) << "\n";
	}
	fin.close();
	fout.close();
	//t.Print();
	return 0;
}
*/