#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		long long cats,dogs,legs;
		cin>>cats>>dogs>>legs;

		if(legs%4==0)
		{
			    if(4*(cats+dogs)>=legs)
			    {

               if(legs>=4*dogs)
               {
                     if(2*dogs>=cats)
                     {
                     	cout<<"yes"<<endl;
                     }
                     else if(4*(cats-2*dogs)<= legs -4*dogs){
                             cout<<"yes"<<endl;
                     }
                     else
                     	cout<<"no"<<endl;
               }
               else
               {
               	cout<<"no"<<endl;
               }
           }
           else
           	cout<<"no"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}