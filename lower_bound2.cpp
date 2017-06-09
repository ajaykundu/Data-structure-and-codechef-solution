#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	
        int n;
        cin>>n;
        std::vector<int> v;

        for(int i=0;i<n;i++)
        {
        	int z;cin>>z;
        	v.push_back(z);
        }

        vector<int>::iterator low;

        low=lower_bound(v.begin(),v.end(),7);

        cout<<*low;

	return 0;
}