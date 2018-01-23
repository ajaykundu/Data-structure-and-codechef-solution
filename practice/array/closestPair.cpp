#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;


void printpair(int arr[],int n,int x)
{
	int l=0;
	int r=n-1;
	int diff = INT_MAX;
	int res_l,res_r;
   while(r>l)
   {
	  if (abs(arr[l] + arr[r] - x) < diff)
       {
           res_l = l;
           res_r = r;
           diff = abs(arr[l] + arr[r] - x);
       }
 
       // If this pair has more sum, move to smaller values.
       if (arr[l] + arr[r] > x)
           r--;
       else // Move to larger values
           l++;
   }
   cout<<arr[res_l]<<" "<<arr[res_r]<<endl;
}

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		printpair(arr,n,x);
	}
	return 0;
}