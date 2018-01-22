#include <iostream>
#include <map>
#include <iterator>
 
using namespace std;
void printMissing(int arr1[],int arr2[],int n,int m)
{
    map <int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr1[i]]=1;
       // cout<<arr1[i]<<" "<<mp[arr1[i]]<<endl;
    }
    for(int i=0;i<m;i++)
    {
        mp[arr2[i]]=0;
        //cout<<arr2[i]<<" "<<mp[arr2[i]]<<endl;
    }
    
    map<int,int>::iterator itr;
    for(itr=mp.begin();itr!=mp.end();itr++)
    {
        if(itr->second == 1)
        {  
        	
            cout<<itr->first<<" ";
        }
    }
    cout<<endl;
}


int main()
 {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[n];
	    int arrM[m];
	    for(int i=0;i<n;i++)
		{
			
			cin>>arr[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>arrM[i];
		}
        printMissing(arr,arrM,n,m);
	}
	return 0;
}