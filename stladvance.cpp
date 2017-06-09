#include <iostream>
#include <vector>
#include <map>
using namespace std;


int main(int argc, char const *argv[])
{
	map<int,vector<int> > m;

   m[0].push_back(12);
   m[0].push_back(13);

   map<int,vector<int> >::iterator itr;
     
     for(itr=m.begin();itr!=m.end();itr++)
     {
     	   vector<int>::iterator itrv;
     	   for(itrv=(itr->second).begin();itrv!=(itr->second).end();itrv++)
     	   {
     	   	    cout<<(*itrv)<<" ";
     	   }
     }

	return 0;
}
