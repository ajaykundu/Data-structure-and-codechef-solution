#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	cin>>n;
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		long long num;cin>>num;
		sum=sum+num;
	}

	for(int i=0;i<n-1;i++)
	{
      sum=sum*2;
      sum=sum%1000000007;
	}

	cout<<sum<<endl;
	return 0;
}