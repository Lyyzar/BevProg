#include "../std_lib_facilities.h"
int main()
try {

//1.
	cout<<"Success!\n";
//2.
	cout<<"Success!\n";
//3.
	cout<<"Success" << "!\n";
//4.
	cout << "success" << '\n'; 
//5.
	int res = 7; vector<int> v(10); v[5] = res; cout<<"Success!\n"; 
	
//6.
	vector<int> e(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";
//7.
	if (true) cout << "Success!\n"; 
		else cout << "Fail!\n";
//8.
	bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n"; 
//9.
	string s = "ape";  c = "fool">s; if (c) cout << "Success!\n";
//10.
	s = "ape"; if (s!="fool") cout << "Success!\n"; 
//11.
	s = "ape"; if (s!="fool") cout << "Success!\n"; 
//12.
	s = "ape"; if (s!="fool") cout << "Success!\n";
//13.
	vector<char> p(5); for (int i=0; i<p.size(); i++)  cout << "Success!\n";
//14.
	vector<char> k(5); for (int i=0; i<=k.size(); i++)  cout << "Success!\n";
//15.
	s = "Success!\n"; for (int i=0; i<6; ++i) cout << s;
//16.
	if (true) cout << "Success!\n"; else cout << "Fail!\n"; 
//17.
	int x = 2000; char l = x; if (c==2000) cout << "Success!\n"; 
//18.
	s = "Success!\n"; for (int i=0; i<10; i++) cout << s[i];
//19.
	vector<int> g(5); for (int i=0; i<v.size(); i++)  cout << "Success!\n";
//20
	int i=0; int j = 9; while (i<=10) i++; if (j<i) cout << "Success!\n";
//21.
	x = 2; double d = x/2;d=5/d; if (d==2*(x+0.5)) cout << "Success!\n";
//22.
	s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
//23.
	i=0; while (i<10) ++i; if (j<i) cout << "Success!\n";
//24.
	x = 4; d = x/2;d=5/d; if (d==2+0.5) cout << "Success!\n";
//25.
	cout << "Success!\n";
















keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}
