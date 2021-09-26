#include "std_lib_facilities.h"

int main()
{

cout << "Hello world!\n";

string firstn, lastn, friendname;
int age;
char friendsex;


cout << "Enter the name of the person you want to write to." <<endl;
cin>> firstn;
cout<<"Dear " << firstn <<endl;

cout <<"How are you?"<<endl;

cout <<"Enter another friend name: " ;
cin>>friendname;

cout<<"Have you seen " << friendname<< " lately?" <<endl;
cout << "What is your friends sex? [f/m/o]";
cin>> friendsex;
cout<<endl;

if (friendsex=='m') cout<<"If you see " <<friendname<<", "<< "please ask him to call me.";

	else if(friendsex=='f') cout <<"If you see " << friendname<<", "<<" please ask her to call me.";
else cout <<"If you see " << friendname<<", "<<" please ask them to call me.";
cout <<endl;
cout<<"Please enter friend age: ";
cin>>age;
cout<<endl;

if (0<age<110)	cout<<"I hear you just had a birthday and you are "<< age << " years old.\n";
	else simple_error("You're kidding!");

if(0<age<12) cout <<"Next year you will be " <<age+1 <<".\n";
else if(age==17) cout <<"Next year you will be able to vote.\n";
else if(70<age<110) cout << "I hope you are enjoying retirement.\n";


cout<<"Yours sincerely," << "_____________  _____________\n";
cout<< "Balogh Kristóf\n";

return 0; 
}