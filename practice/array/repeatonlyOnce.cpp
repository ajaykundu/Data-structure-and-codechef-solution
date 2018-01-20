#include <iostream>
using namespace std;

int onceRepeat(int arr[],int n){
	int xor1 = 0;
	for(int i=0;i<n;i++)
	{
		xor1 ^= arr[i];
	}
	return xor1;
}

int main(int argc, char** argv)
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<onceRepeat(arr,n)<<endl;
	return 0;
}