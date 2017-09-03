#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	int k;
	cin>>k;
	int z;
	int arr[k];
	int p,q;
	q=k;
	for(p=0;p<k;p++)
	{
		arr[p]=q;
		q--;
	}
	for(int i=0;i<k;i++)
	{
		z=i;
		for(int j=0;j<k;j++)
		{
			if(z>=k)
			{
				z=0;
				
			}
			cout<<arr[z]<<" ";
			z++;
		}
		cout<<endl;
	}
	
	}
	return 0;
}