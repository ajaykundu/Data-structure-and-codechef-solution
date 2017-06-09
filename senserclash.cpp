#include <iostream>
using namespace std;
int main()
{
	int i,j;
	cin>>i>>j;
	int divider=2;
	int lcm=1;
	int t;
	
	if(i>j)
	 t=i;
   else
   {
	   t=j;
   }
	while(divider<=t)
	{
		if(i%divider==0 || j%divider==0)
		{
			lcm=lcm*divider;
			
			if(i%divider==0)
			{
				i=i/divider;
			}
			if(j%divider==0)
			{
				j=j/divider;
			}
		}
		else
		{
			divider++;
		}
	}
	cout<<lcm;
}