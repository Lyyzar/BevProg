#include "../std_lib_facilities.h"

vector<int> gv(10);

	

void f(vector<int> f)
{

vector<int> lv(f.size());
	for(int i=0;i<f.size();++i)
	{
		lv[i]=f[i];
		cout<<lv[i]<<' ';
	}
	cout <<endl;			

vector<int> lv2=f;
	for(auto& a : lv2)
		cout<<a<<' ';
	cout << endl;
}


int main(){

for(int i=1;i<10;++i)
{
	gv[0]=1;
	gv[i]=gv[i-1]*2;
}
f(gv);

vector<int> vv(10);

for(int i =1;i<10;++i)
{
	vv[0]=1;
	vv[i]=vv[i-1]*(i+1);
}
f(vv);





return 0;
}
