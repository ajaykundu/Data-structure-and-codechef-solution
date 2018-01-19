#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a=b;
	b=temp;
}

void Sort012(int arr[],int n)
{
	int ptr1=-1;
	int ptr2 = n-1;
	if(arr[0]==1)
	{
		ptr1 = 0;
	}
	
	int i=0;
	while(i < ptr2)
	{
		if(arr[i]==2)
		{
			while(arr[ptr2]==2 && ptr2 > i)
			{
				ptr2--;
			}
			swap(arr[ptr2],arr[i]);
			if(ptr1==-1 && arr[i]==1)
			{
				ptr1=i;
			}
		}else if(arr[i]==0)
		{
			if(ptr1!=-1)
			{
				swap(arr[ptr1],arr[i]);
				ptr1++;
			}
		}else if(arr[i]==1)
		{
			if(ptr1==-1)
			{
				ptr1=i;
			}
		}
		
		i++;
	}
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
		
		Sort012(arr,n);
		print(arr,n);
		
	}
	return 0;
}