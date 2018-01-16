#include <iostream>
using namespace std;


int rotate90(int *arr,int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
          cout<<*((arr+i*n)+j)<<" ";
		}
		cout<<endl;
	}
}

int main(int argc, char** argv)
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
 		for(int j=0;j<n;j++)
		 {
		 	cin>>arr[i][j];
		 }
	}
	rotate90((int *)arr,m,n);
	return 0;
}