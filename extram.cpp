#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}


      sort(arr,arr+n);

// for(int i=0;i<n;i++)
// {
// 	cout<<arr[i]<<" ";
// }

// cout<<endl;

      if(arr[1]-arr[0]>1 || arr[1]-arr[0]==0)
      {
      	cout<<arr[0]<<endl;
      }
      else
      {
      	int ans=0;
      	for(int i=1;i<n-1;i++)
      	{
             if(arr[i]==arr[i+1])
             	ans=arr[i];
      	}
      	if(ans)
      		cout<<ans<<endl;
      	else
      	{
      		cout<<arr[n-1]<<endl;
      	}
      }

	}
	return 0;
}