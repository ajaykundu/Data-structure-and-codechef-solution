#include <iostream>
using namespace std;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void rearrange(int arr[],int n,int ptrpost)
{
	int i=0;
	while(ptrpost <n)
	{
		swap(arr[ptrpost],arr[i]);
		ptrpost++;
		i = i + 2;
	}
}

void Sort(int arr[],int n)
{
	 
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
 
    
    int pos = i+1, neg = 0;
 
   
    while (pos < n && neg < pos && arr[neg] < 0)
    {
        swap(arr[neg], arr[pos]);
        pos++;
        neg += 2;
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
		{
			cin>>arr[i];
		}
		Sort(arr,n);
		print(arr,n);
	}
	return 0;
}