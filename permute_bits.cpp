#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
void permute(int *arr,int l,int r)
{
	if(l==r)
	{
for(int i=0;i<r;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
		return;
	}

	arr[l]=0;
	permute(arr,l+1,r);
	
	
	arr[l]=1;
		
	permute(arr,l+1,r);
	
}

void perm(int n)
{
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i]=0;
	}

	permute(arr,0,n);
}



int main(int argc, char const *argv[])
{

	while(true)
	{
	int n;
	cin>>n;
	perm(n);
}
	return 0;
}