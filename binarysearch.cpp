#include <iostream>
using namespace std;
int binarysearch(int *arr,int size,int value)
{    
	if(size<1)
	{
		cout<<"value not found";
		return 0;
	}
	if(arr[size/2]<value)
	{
		return binarysearch(arr+(size/2),size-(size/2),value);
	}else if(arr[size/2]>value)
	{
		return binarysearch(arr,size/2,value);
	}else
	{
		return value;
	}
}
int main(int argc, char const *argv[])
{
	int arr[10];
	for(int i=2;i<12;i++)
	{
      arr[i-2]=i;
	}
	cout<<binarysearch(arr,10,2);
	return 0;
}