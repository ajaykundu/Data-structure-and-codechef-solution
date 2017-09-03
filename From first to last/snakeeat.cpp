#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	   while(testcases--)
	 {
		int n,q;
    	cin>>n>>q;

	 	int arr[n];

	 	for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
	 
	 sort(arr,arr+n);

	 for(int i=0;i<q;i++)
	 {
	 	int length; cin>>length;
	 	int anscounter=0;

	 	for(int j=n-1;j>=0;j--)
	 	{
	 		if(arr[j]>=length)
	 		{
	 			anscounter++;
	 		}
	 		else
	 		{
	 			if(j==0)
	 			{
	 				//do nothing.
	 			}
	 			else {
	 				arr[j-1]=arr[j]+1;
	 			}
	 		}
	 	}

	 	cout<<anscounter<<endl;

	 }

	}


	return 0;
}
