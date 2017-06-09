#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int n,m;cin>>n>>m;

		int arr[n][m];
		int max=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				int val;cin>>val;
		          arr[i][j]=val;
		          if(val>max)
		          	max=val;
			}
		}

		int maxcounter=0;

		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[i][j]==max)
				{
					maxcounter++;
				}
			}
		}


        if(maxcounter==n*m)
        {
        	cout<<0<<endl;
        }
        else{
        	     
        }
 

	}
	return 0;
}