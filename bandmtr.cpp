#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int order;
		cin>>order;

		int numone=0;
		int arr[order][order];
		for(int i=0;i<order;i++)
		{
			for(int j=0;j<order;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j]==1)
				{
					numone++;
				}
			}
		}
  //cout<<numone<<endl;
		int ans=0;

		numone=numone-order;
		order--;
		if(numone<=0)
		{
			ans=0;
		}
		else {
		        while(numone>0 && order>=1)
		        {
		        	ans++;
		        	numone=numone-2*order;
		        	order--;
		        }
		}

     cout<<ans<<endl;


	}
	return 0;
}