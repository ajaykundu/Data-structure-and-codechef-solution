#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		long long n;
		cin>>n;

		long long arr[n];
		for(long long i=0;i<n;i++)
		{
		  cin>>arr[i];
		}

		long long ans=0;

		for(int i=0;i<n;i++)
      {
      	ans=ans + arr[i];
      }
      cout<<ans<<endl;
	}
	return 0;
}