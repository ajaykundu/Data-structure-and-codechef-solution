#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int finalarr[n];
	int k=0;

	for(int i=0;i<n;i++)
	{
		int j=0;
		for(j=0;j<k;j++)
		{
			if(finalarr[j]==arr[i])
			{
				break;
			}
		}

		if(j==k)
		{
			finalarr[k]=arr[i];
			k++;
		}

	}

	for(int i=0;i<k;i++)
	{
		cout<<finalarr[i]<<" ";
	}
	return 0;
}