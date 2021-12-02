#include "../std_lib_facilities.h"


ostream& print_array10(ostream& os, int* a)
{
	for(int i=0; i<10;++i)
		{
			os<<a[i]<<endl;
		}
		return os;
}

ostream& print_vector(ostream& os, vector<int>& vv)
{
	for(auto& v : vv)
		os << v << ' ';
		cout<<endl;
		return os;
}

int main(){

 int x=100;
vector<int> T(10);
for(int i=0;i<10;++i)
{
	T[i]=x;
	x++;
}
print_vector(cout,T);


//---------------------------
x=100;
vector<int> P(11);
for(int i=0;i<=10;++i)
{
	
	P[i]=x;
	++x;
}
print_vector(cout,P);


//---------------------------

vector<int> K(20);
x=100;
for(int i=0;i<20;++i)
{
	
	K[i]=x;
	++x;
}
print_vector(cout,K);

return 0;
}
