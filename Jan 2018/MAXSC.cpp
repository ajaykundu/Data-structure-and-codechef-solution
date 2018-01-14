#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
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
		
		for(int i=0;i<n;i++)
		{
			sort(arr[i],arr[i]+n);
		}
		
		long long sum=arr[n-1][n-1];
		int lastMax =arr[n-1][n-1];
		int p=1;
		for(int i=n-2;i>=0;i--)
		{   
			p=1;
			
			for(int j=n-1;j>=0;j--)
			{
				if(lastMax > arr[i][j])
				{
					p=0;
					lastMax = arr[i][j];
					sum = sum + arr[i][j];
					break;
				}
			}
			if(p==1)
			{
				break;
			}
		}
		
		if(n==1 || p==0)
			cout<<sum<<endl;
		else cout<<-1<<endl;
	}
	return 0;
}