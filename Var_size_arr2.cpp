#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num_var;
	cin>>num_var;
	int num_query;
	cin>>num_query;

	int *arr[num_var];

	for(int i=0;i<num_var;i++)
	{
		int a;cin>>a;
		int arr[a];
		for(int j=0;j<a;j++)
		{
			cin>>arr[j];
		}
		arr[i]=&arr;
	}

	for(int i=0;i<num_query;i++)
	{
		int a,b;
		cin>>a>>b;

	}
	return 0;
}