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

    	int ans=0;
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
;
                   int max=0;

                 for(int j=i+1;j<(i +turn[0]  -turn[1] );j++)
                 {
                    
                       int sum_chefu=0;
                        sum_chefu=sum[j+turn[1]-1]-sum[j-1];
                   
                       if(max < sum_chefu)
                       {
                        max=sum_chefu;
                       }

                 }
            
                 if(ans < (sum_chef-max))
                 {
                  ans=(sum_chef-max);
                 }
        }
      cout<<ans<<endl;
      
    }

	return 0;
}