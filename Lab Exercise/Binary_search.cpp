#include <iostream>
using namespace std;

int BinarySearch(int arr[],int lb,int ub,int SearchEelement,int n)
{
	if(lb==ub)
	{
		return -1;
	}
	n=n/2;
	if(arr[lb+n]==SearchEelement)
	{
		return lb+n;
	}
	if(arr[lb+n]>n)
	{
		BinarySearch(arr,lb,lb+n-1,SearchEelement,n);
	}
	else
	{
		BinarySearch(arr,ub-n+1,ub,SearchEelement,n);
	}
}


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int arr[n];
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];   	
    }
    
    int SearchEelement;
    cin>>SearchEelement;

    cout<<BinarySearch(arr,0,n-1,SearchEelement,n);

	return 0;
}