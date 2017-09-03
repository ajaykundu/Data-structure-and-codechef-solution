#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int arr[]={5,2,3,4,1};
    int n=5;
    for(int i=0;i<n;i++)
    {  
    	int j=0;
    	while(arr[i]>arr[j] && j<i)
    	{
    		j++;
    	}

    	for(int k=i;k>j;k--)
    	{
              arr[k]=arr[k-1];
    	}

   arr[j]=arr[i];


    }

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";

}

   return 0;
}