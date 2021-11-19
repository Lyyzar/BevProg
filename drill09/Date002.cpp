#include "../std_lib_facilities.h"

struct Date {

	int year, month, day;
	Date(int y,int m,int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if(y>0) year=y;
		else error("Invalid year.");
	if(m<=12 && m>0) month=m;
		else error("Invalid month.");
	if(d<=31 && d>0) day=d;
		else error("Invalid day.");
}

void Date::add_day(int n)
{
	day +=n;
	if(day>31)
	{
		month++;
		day-=31;
		if(month>12)
		{
			year++;
			month -=12;
		}
	}
}

int main()
try{
	

	Date today {2021,12,31};

	cout<<"Date: "<<today.year<<". "<<today.month<<". "<<today.day <<".\n";

	today.add_day(4);

	cout<<"Date: "<<today.year<<". "<<today.month<<". "<<today.day <<".\n";

	today.year=-3;
	today.month=16;
	today.day=100;

	cout<<"Date: "<<today.year<<". "<<today.month<<". "<<today.day <<".\n";
/*
	Date tomorrow;
	init_date(tomorrow,2021,12,31);
		cout<<"Tomorrow: "<<tomorrow.y<<". "<<tomorrow.m<<". "<<tomorrow.d <<".\n";

		add_day(tomorrow, 70);

		cout<<"Tomorrow: "<<tomorrow.y<<". "<<tomorrow.m<<". "<<tomorrow.d <<".\n";


*/
	return 0;


} catch(exception& e) {
	cerr<< e.what()<<'\n';
	return 1;
}