#include <iostream>
using namespace std; 

int Minrotated(int arr[],int l,int h)
{   
	if(arr[h] > arr[l])
		return arr[l];
	
	if(l==h)
		return arr[l];
	int mid = (l+h)/2;
	if(mid==l)
		return arr[l+1];
	
	if(arr[mid] < arr[l])
	{
		Minrotated(arr,l,mid);
	}
	else Minrotated(arr,mid+1,h);
}

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	cout<<	Minrotated(arr,0,n-1)<<endl;
	}
	return 0;
}