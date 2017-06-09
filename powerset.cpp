#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
   int sum=0;
   cout<<endl;
	for(int i=1;i<pow(2,n);i++)
	{
		//cout<<"hello"<<endl;
          int t=n-1;
          int q=i;
          cout<<i<<" : ";
      while(q>0)
      {
    if(q%2!=0)
    {
      sum=sum+arr[t];
      cout<<arr[t]<<" ";
      q=q/2;
      t--;
  }
  else {
  
      	q=q/2;
      	t--;
      
  }
      }
      cout<<endl;
      sum=sum%1000000007;
	}

	//cout<<sum<<endl;
	return 0;
}