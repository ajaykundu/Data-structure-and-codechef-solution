#include <iostream>
using namespace std;

int circulattour(int arr[],int n)
{   int sum =0;
	for(int i=0;i<n;i++)
	{
		arr[i] = arr[i] - arr[i+1];
		sum = sum + arr[i];
		i++;
	}
	if(sum < 0)
		return -1;
	int ans=0;
	int anssum = 0;
	
	for(int i=0;i<n;i++)
	{
		anssum = anssum + arr[i];
		if(anssum < 0)
		{
			ans = i+2;
		}
	}
	
}