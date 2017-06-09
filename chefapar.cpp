#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int num_month;
		cin>>num_month;

		int pay_info[num_month];
		for(int i=0;i<num_month;i++)
		{
			cin>>pay_info[i];
		}

         int zero_count=0; int decider=1;int first=-1;
       for(int i=0;i<num_month;i++)
       {
       	if(pay_info[i]==0 && decider==1)
       	{
       		decider=0;
       		first=i;
       	}
       	if(pay_info[i]==0)
       	{
       		zero_count++;
       	}
       }
       if(first==-1)
       {
       	cout<<0<<endl;
       }
   else
       cout<<1000*zero_count+ 100*(num_month-first)<<endl;
	}
	return 0;
}