#include <iostream>
#include <limits.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
	    int min=INT_MAX;
	    int ans=0;
	    for(int i=0;i<n;i++)
	    {
	    	int val;
	    	cin>>val;
	    	if(min > val)
	    	{
               min=val;
               ans=i;
	    	}
	    }
	    cout<<ans+1<<endl;
	}
	return 0;
}