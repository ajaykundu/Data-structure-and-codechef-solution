#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		int xenny[n];int yana[n];
		for(int i=0;i<n;i++)
		{
			cin>>xenny[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>yana[i];
		}

		int sum1=0,sum2=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				sum1=sum1+xenny[i];
			}
			else
			{
				sum1=sum1+yana[i];
			}
		}

		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				sum2=sum2+yana[i];
			}
			else
			{
				sum2=sum2+xenny[i];
			}
		}

		if(sum1<=sum2)
		{
			cout<<sum1<<endl;
		}
		else
		{
			cout<<sum2<<endl;
		}
	}
	return 0;
}