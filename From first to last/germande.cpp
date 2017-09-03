#include <iostream>
#include <math.h>
using namespace std;

int do_sum(int *arr,int start,int end,int sum_decider,int arr_size)
{
	if(end > arr_size)
	{
           int k=end%arr_size;
           int sum=0;
           for(int i=start;i<arr_size;i++)
           {
           	sum=sum+arr[i];
           }
           for(int j=0;j<=k;j++)
           {
           	sum=sum+arr[j];
           }
           if(sum>sum_decider)
           {
           	return 1;
           }
           else 
           	return 0;
	}
	else
	{
		int sum=0;
		for(int i=start;i<end;i++)
		{
			sum=sum+arr[i];
		}
		if(sum>sum_decider)
		{
			return 1;
		}
		else
			return 0;
	}
}



int main(int argc, char const *argv[])
{
	
        int testcases;
        cin>>testcases;

        while(testcases--)
        {
        	int num_state;
        	int num_dist;
        	cin>>num_state>>num_dist;
        	int arr[num_dist*num_state];
        	int sum_checker=0;
        	for(int i=0;i<(num_state*num_dist);i++)
        	{
        		cin>>arr[i];
        		sum_checker=sum_checker+arr[i];
        	}


        	int decider=0;
        	int starter;
        	int another=0;

        	
        	for(int i=0;i<num_dist;i++)
        	{
        		starter=i;
        		int sum=0;
        		for(int j=0;j<num_state;j++)
        		{
                     sum=sum+ do_sum(arr,starter,starter+num_dist,(num_dist/2),num_dist*num_state);
                     starter=starter+num_dist;
                     if(i*j > 100000)
                     {
                     	another=1;
                     	break;
                     }
        		}
        		if(sum>(num_state/2))
        		{
        			decider=1;
        			break;
        		}
        		if(another)
        		{
        			decider=0;
        			break;
        		}

        	}

        	if(decider)
        		cout<<1<<endl;
        	else cout<<0<<endl;
        }

        
	return 0;
}