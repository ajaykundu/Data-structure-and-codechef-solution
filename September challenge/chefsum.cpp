#include <iostream>
#include <limits.h>
using namespace std;


int chefSumAns(int n,int arr[],long long fsum[],long long bsum[])
{
	long long minSum=LLONG_MAX;
	int ansIndex;
	for(int i=0;i<n;i++)
	{
		if(minSum > (fsum[i] + bsum[i]))
		{
			minSum=fsum[i]+ bsum[i];
			ansIndex=i;
		}
	}
	return ansIndex+1;
}

long long chefSum(int n,int arr[])
{
	long long fsum[n];
	long long bsum[n];
	fsum[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		fsum[i]=fsum[i-1] + arr[i];
	}
	bsum[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		bsum[i]=bsum[i+1] + arr[i];
	}
    
    
	return chefSumAns(n,arr,fsum,bsum);
}

int main(int argc, char const *argv[])
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
		cout<<chefSum(n,arr)<<endl;
	}
	return 0;
}