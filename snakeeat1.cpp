#include <iostream>
#include <queue>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int n,q; cin>>n>>q;
            
       set<int> s;
        for (int i = 0; i < n; ++i)
        {
        	int num;cin>>num;

            s.insert(num);

        }

        for (int i = 0; i < q; ++i)
        {
        	
               int val;cin>>val;

               int counter=0;
               int size=n-1;
               
               set<int>::reverse_iterator itr=s.rbegin();

               while(size>=0)
               {
               	   int topval=*itr;
               	
               	   if(topval>=val)
               	   {
               	   	   counter++;
               	   	   size--;
               	   }else
               	   {
               	   	   size=size - (val - topval);
               	   	   if(size>=0)
               	   	   {
               	   	   	counter++;
               	   	   }

               	   }
               	   itr++;

               }
               
           cout<<counter<<endl;
      }

            
	}
	return 0;
}