#include <iostream>
#include <stack>
using namespace std;

bool rainbow(int arr[],int n)
{
    int i=0,j=n-1;
    int flag=1;
    int index=1;
    if(arr[0]!=1)
        return false;
    while(i!=j)
    {
        //cout<<"hello"<<endl;
        //cout<<arr[i]<<" "<<index<<endl;

          if(arr[i]!=arr[j] || (arr[i]!=index && arr[i]!=index+1) || arr[i]>=7)
          {
            flag=0;
            break;
          }
       index=arr[i];
          i++;
          j--;
        
    }

    if(i==j && arr[i]!=7)
    {
       return false;
    }

return flag;
}

int main(int argc, char const *argv[])
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

    	if(rainbow(arr,n))
    		cout<<"yes"<<endl;
    	else cout<<"no"<<endl;
    }
	return 0;
}