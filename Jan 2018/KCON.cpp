#include <iostream>
using namespace std; 

long long maxsubarry(long long arr[],long long n)
{
	long long uptomax = arr[0];
	long long currmax = arr[0];
	for(long long  i=1;i<n;i++)
	{
		currmax = max(arr[i],currmax + arr[i]);
		uptomax = max(uptomax,currmax);
	}
	return uptomax;
}

long long lms(long long arr[],long long n){
	long long sum=0;
	long long maxsum=arr[0];
	for(long long i=0;i<n;i++)
	{
		sum = sum + arr[i];
		if(sum > maxsum){
			maxsum = sum;
		}
	}
	return maxsum;
}

long long rms(long long arr[],long long n)
{
	long long sum = 0;
	long long maxsum = arr[n-1];
	for(long long i=n-1;i>=0;i--)
	{
		sum = sum + arr[i];
		if(sum > maxsum)
			maxsum = sum;
	}
	return maxsum;
}

long long overallsum(long long arr[],long long n)
{
	 long long sum=0;
	 for(long long i=0;i<n;i++)
	 	sum = sum + arr[i];
	 return sum;
}

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		long long n,k;
		cin>>n>>k;
		long long arr[n];
		for(long long i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		if(k==1)
		{
             cout<<maxsubarry(arr,n)<<endl;
		}
		else {
			if(overallsum(arr,n)>0)
			{	
			cout<<max(lms(arr,n)+rms(arr,n)+(k-2)*overallsum(arr,n),maxsubarry(arr,n))<<endl;
			}
			else
			{
			cout<<max(lms(arr,n)+rms(arr,n),maxsubarry(arr,n))<<endl;
			}
		}
		
	}
	return 0;
}