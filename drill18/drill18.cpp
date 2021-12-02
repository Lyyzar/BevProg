#include "../std_lib_facilities.h"


int ga[10];
void f(int f[],int n)
{
	int la[10];
	for(int i=0;i<n;++i)
		{
		la[i]=f[i];
		cout << la[i] << endl;
		}
	
	int* p=new int[n];
	for(int i=0;i<n;++i)
		{
		p[i]=f[i];
		cout << p[i] << endl;
		}
		delete[] p;
		}

int main(){

for(int i=1;i<10;++i)
{
	ga[0]=1;
	ga[i]=ga[i-1]*2;
}
f(ga,10);

int aa[10];
for(int i =1;i<10;++i)
{
	aa[0]=1;
	aa[i]=aa[i-1]*(i+1);
}
f(aa,10);








return 0;
}



//
