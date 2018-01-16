#include <iostream>
using namespace std;

int rotate(int **arr,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(int argc, char** argv)
{
	int **arr;
	int m,n;
	cin>>m>>n;
	arr= new int*[m];
	for(int i=0;i<m;i++)
	{
		arr[i]=new int[n];
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	rotate(arr,m,n);
	
	for (int i = 0; i < m; ++i)
	delete[] arr[i];
	return 0;
}