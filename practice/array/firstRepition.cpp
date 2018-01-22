#include <iostream>
#include <set>
using namespace std;

int firstRepition(int arr[],int n)
{
	int ans = -1;
	
	set<int> s;
	
	for(int i=0;i<n;i++)
	{
          if(s.find(arr[i]) != s.end())
		  {
		  	 ans = i;
		  }
		  else {
			  s.insert(arr[i]);
		  }
	}
	return ans;
}

int main(int argc, char** argv)
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
		cout<<firstRepition(arr,n)<<endl;
	}
	return 0;
}