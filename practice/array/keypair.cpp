#include<iostream>
#include<map>
using namespace std;

int findSum(int arr[],int n,int sum)
{
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    
    for(int i=0;i<n;i++)
    {
        if(sum - arr[i] == arr[i])
        {
            if(mp[arr[i]]>=2)
            {
                return 1;
            }
        }
        else if(mp[sum - arr[i]] >=1)
        {
            return 1;
        }
    }
    return 0;
}
int main()
 {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    if(findSum(arr,n,sum))
	    {
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	}
	
	return 0;
}