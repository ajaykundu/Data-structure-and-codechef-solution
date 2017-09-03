#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */

	int n;
	cin>>n;
  std::vector<int> arr;
	for(int i=0;i<n;i++)
	{
		int z;cin>>z;
		arr.push_back(z);
	}

	int query;
	cin>>query;  // enter the number of query;
	while(query--)
	{
		int q;
		cin>>q;
          vector<int>::iterator low;
          low=lower_bound(arr.begin(),arr.end(),q);
        if(arr[low+1-arr.begin()]==q)
        {
        	cout<<"Yes "<<(low+1-arr.begin())<<endl;
        }
        else
        {
        	cout<<"No "<<(low-arr.begin()+1)<<endl;
        }
	}
	return 0;
}