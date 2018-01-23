#include <iostream>
#include <algorithm>
using namespace std;

bool triplepair(int arr[],int n,int sum)
{
	sort(arr,arr+n);
	 for(int i=0;i<n;i++)
	 {
  	   	   int j=i+1;
  	   	   int k=n-1;
  	   	   while(j<k)
				{
 					if(arr[i]+arr[j]+arr[k] == sum)
 						return 1;
 					else if(arr[i] + arr[j] + arr[k] > sum)
					 {
					 	k--;
					 }
					 else j++;
				}
	 }
	 return 0;
}

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		int sum;
		cin>>n>>sum;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	  cout<<triplepair(arr,n,sum)<<endl;
	}
	return 0;
}