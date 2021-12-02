#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a,int n)
{
	for(int i=0; i<10;++i)
		{
			os<<a[i]<<endl;
		}
		return os;
}

int main(){


int x=7;
int* p1=&x;

cout <<"p1== "<<p1<<" *p1== "<<*p1<<endl;

int* p2=new int[7];
int k=1;


for(int i=0;i<7;++i)
{
	p2[i]=k;
	k*=2;
}

cout << "p2== " << p2 << " *p2== " << *p2 <<endl;
cout <<"The values of the array: "<<endl;
for(int i=0;i<7;++i)
{
	cout << p2[i] <<" ";


}
cout << endl;
//5

int* p3=p2;

p2=p1;
p2=p3;


cout << "p1== " << p1 << " *p1== " << *p1 <<endl;
cout << "p2== " << p2 << " *p2== " << *p2 <<endl;

delete[] p2;
//10 with vectors
vector<int> v1(10);
vector<int> v2(10);

k=1;
for(int i=0;i<10;++i)
{
	v1[i]=k;
	k*=2;
}

for(int i=0;i<10;++i)
	v2[i]=v1[i];
cout<<"v2's elements: " << endl;
for(auto& v : v2)
	cout<<v <<" ";
cout << endl;
//10-12 with arrays
/*
p1=new int[10];
k=1;
for(int i=0;i<10;++i)
{
	p1[i]=k;
	k*=2;
}

p2=new int[10];
cout<< "p2's elements: " <<endl;
for(int i=0;i<10;++i)
{
	p2[i]=p1[i];
	cout<< p2[i] << " ";
}
cout << endl;
delete[] p1;
delete[] p2;
*/








	return 0;
}