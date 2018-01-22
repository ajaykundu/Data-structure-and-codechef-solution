#include<iostream>
#include<map>
using namespace std;

int findSum(int arr[],int n,int sum)
{
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    int count=0;
     
 	map<int,int>::iterator itr;
 	for(int i=0;i<n;i++)
	 {
  	   count += mp[sum - arr[i]];
  	   
  	   if(sum - arr[i]==arr[i])
  	   	count--;
	 }
     
    return count/2;
}
int main()
 {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	  cout<<findSum(arr,n,sum);
	}
	
	return 0;
}