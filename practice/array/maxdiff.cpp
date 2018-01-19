#include <iostream>
using namespace std;

int maxdiff(int arr[],int n)
{
	int ptrMax = arr[n-1];
	
	int maxans = -1;
	
	int ptr = n - 2;
	while(ptr >=0)
	{
		if(ptrMax < arr[ptr])
		{
			ptrMax = arr[ptr];
		}
		else if(ptrMax > arr[ptr] && maxans < (ptrMax - arr[ptr]))
		{
			maxans = ptrMax - arr[ptr];
		}
		ptr--;
	}
	return maxans;
}


void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
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
			cin>>arr[i];
		
		cout<<maxdiff(arr,n)<<endl;
	//	print(arr,n);
		
	}
	return 0;
}