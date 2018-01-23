#include<iostream>
#include<map>
using namespace std;

int findSum(int arr[],int n,int diff)
{
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    
    int sizeofit = mp.size();
     
 	map <int,int>::iterator itr;
 	int z=0;
 	for(itr=mp.begin(),z;z<sizeofit;itr++,z++)
	 {
	 	 if(mp.find(itr->first + diff)!=mp.end())
		  {
		  	return 1;
		  }
	 }
     
    return -1;
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
	  cout<<findSum(arr,n,sum)<<endl;
	}
	
	return 0;
}