#include "../std_lib_facilities.h"

struct Point{
	int x;
	int y;
};

istream& operator>>(istream& is, Point& p)
{
	char ch1,ch2,ch3;
	p.x=0;
	p.y=0;
	is>>ch1>>p.x>>ch2>>p.y>>ch3;
	if(ch1 != '(') error("'(' expected");
	if(ch2 != ',') error("',' expected");
	if(ch3 != ')') error("')' expected");
		return is;
}


ostream& operator<<(ostream& os,Point& p)
{

return os<< '(' <<p.x<<','<<p.y<<')'<<endl;

}


int main()
try{
vector<Point> original_points;
vector<Point> processed_points(7);


for(int i=0;i<7;++i)
{
	Point p;
	cin >> p;
	original_points.push_back(p);
} 

	ofstream ofile {"mydata.txt"};

	for(int i=0;i<7;++i)
	{
		ofile<<original_points[i];
	}




ofile.close();

	ifstream ifile {"mydata.txt"};
Point p;

	for(int i=0;i<7;++i)
	{
		ifile>>processed_points[i];
	}


cout << processed_points[0];

ifile.close();
cout<<"Original points: " << endl;
for(int i =0;i<7;++i)
{

	cout << original_points[i];
}
//processed_points[2].x=100;
cout<<"Processed points: " << endl;
for(int i =0;i<7;++i)
{

	cout << processed_points[i];
}

	for(int i= 0;i<7;++i)
	{
		if(original_points[i].x !=processed_points[i].x || original_points[i].y !=processed_points[i].y) error("Something's went wrong!");
	}




return 0;
}catch(exception& e){
	cerr<<e.what()<<endl;
return 1;
}

