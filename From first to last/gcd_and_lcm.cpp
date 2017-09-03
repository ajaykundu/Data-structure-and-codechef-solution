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

int main()
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int i,j;
		cin>>i>>j;

		int gcd1=1;
		int lcm=1;

		gcd1=gcd(i,j);

	    lcm=i/gcd1;
	    lcm=lcm*j;

		cout<<gcd1<<" "<<lcm<<endl;

	}
}