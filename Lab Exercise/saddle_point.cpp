#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	int saddlepoint=0;
	int flag=0;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int min=arr[i][j],max=arr[i][j];
			for(int k=0;k<n;k++)
			{
				if(arr[i][k]<min)
				{
					min=arr[i][k];
				
				}
			}
			for(int k=0;k<n;k++)
			{
				if(arr[k][j]>max)
				{
					max=arr[k][j];
					
				}
			}

			if(arr[i][j]==min && arr[i][j]==max)
			{
				flag=1;
				saddlepoint=arr[i][j];
				break;
			}

		}
		if(flag)
		{
			break;
		}
	}

	if(flag)
	{
		cout<<"the saddlepoint is :"<<saddlepoint;
	}
	else {
		cout<<"there is no saddlepoint in this matrix";
	}
}