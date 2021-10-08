#include "std_lib_facilities.h"

int main(){


double value, incm=2.54, max=0, sum=0, lowest=0;
string unit;
vector<double> values;

cout << "Enter values with units, you can exit with an 'x'.\n"<<"Legal units: in, cm, m, ft.\n";

	while(cin>>value>>unit)
		{
			if(value<=0)
				{
					cout<<"You can't enter negative or 0 values.";
					break;
				}
							

			if(unit == "in")
			{
					value=value*incm;
					value=value/100;
					values.push_back(value);
					sum=sum+value;
					cout<< "Result: " << value << " m\n";
			}
				else if (unit == "m")
				{
						value=value;
						values.push_back(value);
						sum=sum+value;
						cout<< "Result: " << value << " m\n";
				}
					
					else if (unit == "cm")
					{
						value=value/100;
						values.push_back(value);
						sum=sum+value;
						cout<< "Result: " << value << " m\n";

					}
					
						else if (unit == "ft") 	
						{
							value=value*12; 
							value=value*incm;
							value=value/100;
							values.push_back(value);
							sum=sum+value;
							cout<< "Result: " << value << " m\n";
						}

								else if (unit == "x")
									break;

									else 
										{
											cout << "Illegal unit!\n";
											break;
										}

			if(max<value) max=value;
	}


	sort(values);

	lowest=values[0];
	for(int i=0;i<values.size();i++)
	{
		if(lowest>values[i])
			lowest = values[i];


	}
	
	for(int i=0;i<values.size();i++)
		{
			cout<<"The vector "<<i+1 <<". element: " <<values[i]<<" m" <<endl;

		}
		if(max>0 && sum>0)
		{
			cout << "You entered " << values.size() << " values.\n";
			cout << "This was the biggest one you entered: "<<max<<" m."<<'\n';
			cout << "This was the lowest one you entered: "<< lowest<<" m"<<endl;
			cout << "The sum of the entered values: " << sum <<" m"<<'\n';
		}


return 0;

}
