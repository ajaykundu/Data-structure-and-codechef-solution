#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
	

	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
	{
		int n;
		scanf("%d",&n);

		map<int,int> popu_map;
		for(int i=1;i<=n;i++)
		{
			int popu;
			scanf("%d",&popu);

			popu_map.insert(pair<int,int>(popu,i));
		}

		std::vector<int> conn[n];
      for(int i=0;i<n-1;i++)
      {
      	int start,end;
      	scanf("%d%d",&start,&end);
        conn[start-1].push_back(end);
        conn[end-1].push_back(start);
     conn[i].push_back(i+1);
      }
     
     conn[n-1].push_back(n);
for(int i=0;i<n;i++)
{
	for(int j=0;j<conn[i].size();j++)
	{
		cout<<conn[i][j]<<" ";
	}
	cout<<endl;
}


   for(int i=0;i<n;i++)
   {
       
map<int,int>::reverse_iterator rit;
  for (rit=popu_map.rbegin(); rit!=popu_map.rend(); ++rit)
  {
         int aj=rit->second;
         int j=0;
         for( j=0;j<conn[i].size();j++)
         {
               if(aj==conn[i][j])
               {
               	break;
               }
         }

    //std::cout << rit->first << " => " << rit->second << '\n';
        if(j==conn[i].size())
        {
            cout<<aj<<" ";
            break;
        }

       }


   }
cout<<endl;
	}

	return 0;
}
