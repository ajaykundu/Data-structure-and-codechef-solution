#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

struct connection{
   int population;
   vector<int> v;
};



typedef struct connection conn;

int main(int argc, char const *argv[])
{
           int testcases;
           scanf("%d",&testcases);

           while(testcases--)
           {
           	   int n;
           	   scanf("%d",&n);
               conn arr[n];

               for(int i=0;i<n;i++)
               {   
               	scanf("%d",& ((arr[i]).population));
               }

                    int start,end;
                for(int i=0;i<n-1;i++)
          {
          	scanf("%d%d",&start,&end);

          	arr[start-1].v.push_back(end);
          	arr[end-1].v.push_back(start);

          }

             // for(int i=0;i<n;i++)
             // {
             // 	int siz=arr[i].v.size();
             // 	for(int j=0;j<siz;j++)
             // 	{
             // 		cout<<arr[i].v[j]<<" ";
             // 	}
             // 	cout<<endl;
             // }
              int compare=0;
       for(int i=0;i<n;i++)
       {     
       	   int *dicider=(int *)calloc(n,sizeof(int));
       	   dicider[i]=1;
       	   int siz=arr[i].v.size();
                for(int j=0;j<siz;j++)
             	{
             		dicider[arr[i].v[j]-1]=1;
             	}
       	         
       	         int compare=0;
       	         int ans=0;
       	         for(int j=0;j<n;j++)
       	         {
       	         	if(dicider[j]==0)
       	         	{
       	         		if(arr[j].population>compare)
       	         		{
                               compare=arr[j].population;
                               ans=j+1;
       	         		}
       	         	}
       	         } 
       	         if(compare)
          	{
          	cout<<ans<<" ";
          }else
          cout<<0<<" ";

             free(dicider);
          }

   cout<<endl;
           }	
	return 0;
}
