#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b =temp;
}

void binarySorting(int arr[],int n)
{
	int lastptr = n-1;
	int frontptr = 0;
	
	while(lastptr > frontptr)
	{
		if(arr[frontptr] == 1)
		{
			while(arr[lastptr] == 1 && lastptr > frontptr)
			{
				lastptr--;
			}
			
			swap(arr[frontptr],arr[lastptr]);
			lastptr--;
			frontptr++;
		}
		else frontptr++;
	}
	
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
		   binarySorting(arr,n);
		   for(int i=0;i<n;i++)
		   {
		   	cout<<arr[i]<<" ";
		   }
		   cout<<endl;
	}
	return 0;
}

