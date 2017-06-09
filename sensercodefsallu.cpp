#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
long long gcd(long long a,long long b)
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
	while(testcases>0)
	{   long long l;
		int n;
		cin>>n;
		long long array[n];
		int i=0;
		for(i=0;i<n;i++)
		{
			cin>>array[i];
		}

		 l=(array[1]*array[0])/gcd(array[1],array[0]);
       
		int j=0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				long long m=(array[i]*array[j])/gcd(array[j],array[i]);
				if(m<=l)
				{
					l=m;
				}
			}
		}
		cout<<l<<endl;
		testcases--;
	}
}