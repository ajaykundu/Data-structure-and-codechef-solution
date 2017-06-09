#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
