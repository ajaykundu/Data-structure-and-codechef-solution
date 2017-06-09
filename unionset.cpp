#include<iostream>
#include <set>
#include <vector>
using namespace std;


std::set<int> getUnion(const std::set<int>& a, const std::set<int>& b)
{
  std::set<int> result = a;
  result.insert(b.begin(), b.end());
  return result;
}


int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n,k;
		cin>>n>>k;

		vector<int> s[n];

		for(int i=0;i<n;i++)
		{
			int tu; cin>>tu;

			for(int j=0;j<tu;j++)
			{
				int num; cin>>num;
            
				 s[i].push_back(num);
				
			}
		}
    
       //    cout<<" all set out"<<endl;
       // for(int i=0;i<n;i++)
       // {
       // 	   set<int>::iterator itr;

       // 	   for(itr=s[i].begin();itr!=s[i].end();itr++)
       // 	   {
       // 	   	  cout<<*itr<<" ";
       // 	   }
       // 	   cout<<endl;
       // }


     //  cout<<*((s[2].end())++)<<endl;

		int anscounter=0;

		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				
				

		
 
                  
				   // if(result.size()==k)
				   // {
				   // 	  anscounter++;
				   // }
			}
		}

		cout<<anscounter<<endl;
	}
	return 0;
}