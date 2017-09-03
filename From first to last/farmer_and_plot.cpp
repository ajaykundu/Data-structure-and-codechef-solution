#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}

int main(int argc, char const *argv[])
{
	
	int testcases;

	cin>>testcases;

	while(testcases--)
	{
		int n,m;
		cin>>n>>m;

		int min=gcd(n,m);

		int t=n/gcd(n,m);
		int p=m/gcd(n,m);

		cout<<t*p<<endl;

	}
	return 0;
}