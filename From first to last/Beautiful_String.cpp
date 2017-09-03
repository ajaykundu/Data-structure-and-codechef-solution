#include<iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int count=0;
	string arr;
	cin>>arr;
	for(int i=0;i<n;i++)
	{
		if(arr[i]=='1' && arr[i-1]=='0' && arr[i+1]=='0')
		{
            count++;
            arr[i+1]=1;
		}
	}

	cout<<count<<endl;
	return 0;
}