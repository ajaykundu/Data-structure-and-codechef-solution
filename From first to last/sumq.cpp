#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int p,q,r;
		cin>>p>>q>>r;

		long long x[p];
		long long y[q];
		long long z[r];

		for(int i=0;i<p;i++)
		{
			cin>>x[i];
		}
		for(int i=0;i<q;i++)
		{
			cin>>y[i];
		}
		for(int i=0;i<r;i++)
		{
			cin>>z[i];
		}

		long long anssum=0;

		for(int i=0;i<q;i++)
		{
              for(int j=0;j<p;j++)
              {
              	for(int k=0;k<r;k++)
              	{

              		if(x[j]<=y[i] && y[i]>=z[k])
              		{
              			
              			anssum=anssum%1000000007 + (((x[j]+y[i])%1000000007)*((y[i]+z[k])%1000000007))%1000000007;
              		}

              		anssum=anssum%1000000007;
              	}
              }

		}

		cout<<anssum<<endl;
	}
	return 0;
}