#include <iostream>
using namespace std;




int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
    
    while(testcases--)
    {
    	int n,m;
        cin>>n>>m;
    	int arr[n],turn[m];
        int sum[n];

    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
            if(i!=0)
            sum[i]=sum[i-1]+arr[i];
        else
            sum[i]=arr[i];
    	}

    	for(int j=0;j<m;j++)
    	{
    		cin>>turn[j];
    	}

    	int sum_chef_final=0;
    	int lb,ub;
        for(int i=0;i<=(n-turn[0]);i++)
        {
        
            int sum_chef=0;
                 if(i==0)
                 {
                    sum_chef=sum[turn[0]-1];
                 }
                 else
                 {
                    sum_chef=sum[turn[0]-1+i]-sum[i-1];
                 }

                 if(sum_chef > sum_chef_final)
                 { 
                   lb=i; ub=i+turn[0]-1;
                 	sum_chef_final=sum_chef;
                 }
        }
          
          int sum_chefu_final=0;
          for(int i=lb+1;i<(ub-turn[1]+1);i++)
          {
             int sum_chefu=0;

            sum_chefu=sum[i+turn[1]-1]-sum[i-1];
            if(sum_chefu>sum_chefu_final)
            	sum_chefu_final=sum_chefu;
          }

          cout<<sum_chef_final - sum_chefu_final<<endl;
       

     
      
    }

	return 0;
}