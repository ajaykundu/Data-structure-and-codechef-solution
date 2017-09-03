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

		int max=0;
		for(int i=0;i<n;i++)
		{
          int j;cin>>j;
          if(j>max)
          {
          	max=j;
          }
		}

		cout<<n+1-max<<endl;

	}
	return 0;
}