#include <stdio.h>
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
	scanf("%d",&testcases);
	while(testcases>0)
	{   long long l;
		int n;
		scanf("%d",&n);
		long long array[n];
		int i=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
		 l=gcd(array[0],array[1]);
		int j=0;
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				long long m=gcd(array[i],array[j]);
				if(m<=l)
				{
					l=m;
				}
			}
		}
		printf("%l",l);
		testcases--;
	}
}