#include <iostream>
#include <stdio.h>
using namespace std;

void permutebin(int *a,int i,int n)
{
	if(i==n)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[j]);
			
		}
		cout<<endl;
		return;
	}
	a[i]=0;
	permutebin(a,i+1,n);
	a[i]=1;
	permutebin(a,i+1,n);
}

int main()
{
	int n;
	cin>>n;
   int arr[n];
	permutebin(arr,0,n);
}