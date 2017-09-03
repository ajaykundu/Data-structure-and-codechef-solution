#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;


	while(testcases--)
	{
		int n;cin>>n;

		if(n==1)
		{
			cout<<7<<endl;
		}
		else if(n==2)
		{
			cout<<1<<" "<<2<<endl;
		}
		else
		{
			   int arr[n];

			   for(int i=0;i<n;i++)
			   {
			   	   arr[i]=i+1;
			   }
            
			   for(int i=2;i<n;i++)
			   {     
			   	        arr[i]=arr[i-1]+arr[0];
			   	      for(int j=0;j<=i-2;j++)
			   	      {

                             if(arr[j]+arr[i-1]==arr[i])
                             {
                             	arr[i]++;
                             }
                             

      //                        for(int tu=0;tu<n;tu++)
			   // {
			   // 	cout<<arr[tu]<<" ";
			   // }

			   // cout<<endl;

			   	      }
			   }

			   for(int i=0;i<n;i++)
			   {
			   	cout<<arr[i]<<" ";
			   }
			   cout<<endl;
		}
	}
	return 0;
}