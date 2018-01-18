#include <iostream>
using namespace std;

int rotated(int arr[],int l,int h,int key)
{
	if(l>h)
		return -1;
	
	int mid=(h+l)/2;
	cout<<mid<<endl;
	if(arr[mid]==key)
		return mid;
	else if(arr[mid]>key && arr[l]>key)
	{
		l=mid+1;
	}
	else if(arr[mid]<key && arr[l]<key)
	{
		l = mid+1;
	}
	else if(arr[mid]>key && arr[l]<key)
		h = mid -1;
	else if(arr[mid]<key && arr[l]>key)
		l = mid + 1;
	rotated(arr,l,h,key);	
}

int main(int argc, char** argv)
{
	int n;
	cin>>n;
	int key;
	cin>>key;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<rotated(arr,0,n-1,key);
	return 0;
}