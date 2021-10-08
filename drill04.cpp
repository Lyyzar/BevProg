#include "std_lib_facilities.h"

int main()
{


double fnumber=0, snumber=0,x,bigger=0,lower=0,biggest=0;





while(cin>>fnumber>>snumber)
		{
			if(snumber == '|' || fnumber == '|') break;
				else 		{

						bigger=0;

						if(snumber==fnumber) cout<<"The numbers are equal\n";
							else if(snumber>fnumber) 	{
															lower=fnumber;
															bigger=snumber;
															cout<<"The smaller value is: "<<fnumber<<endl;
														}
								else 	{
											lower=snumber;
											bigger=fnumber;
											cout<<"The smaller value is: " <<snumber<<endl;
										}
		
						if((bigger-lower)<=0.01) cout<<"The numbers are almost equal.\n"; 

								if(biggest<fnumber) biggest=fnumber;
								if(biggest<snumber) biggest=snumber;-
									
						
							}

		}

return 0;
	}