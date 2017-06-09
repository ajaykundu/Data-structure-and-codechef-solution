#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	scanf("%d",&testcases);
       
	while(testcases--)
	{
		int n;
		scanf("%d",&n);

		int *arr_popu=(int *)calloc(n,sizeof(int));
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr_popu[i]);
		}

		int *arr_start=(int *)calloc(n-1,sizeof(int));
		int *arr_end=(int *)calloc(n-1,sizeof(int));

		for(int i=0;i<n-1;i++)
		{
			scanf("%d",&arr_start[i]);
			scanf("%d",&arr_end[i]);
		}
     
		

		

		for(int i=0;i<n;i++)
		{
			
			int *arr_teleport=(int *)calloc(n,sizeof(int));

			arr_teleport[i]=1;

			for(int j=0;j<n-1;j++)
			{
				if(arr_start[j]==i+1)
				{
					arr_teleport[arr_end[j]-1]=1;
				}

				if(arr_end[j]==i+1)
				{
					arr_teleport[arr_start[j]-1]=1;
				}
			}

          

			int ans=0;
			int compare=0;

			int counter=0;

          for(int pu=0;pu<n;pu++)
          {
          	if(arr_teleport[pu]==1)
          	{
          		counter++;
          	}
          }

			if(counter==n)
			{  
				cout<<"0"<<" ";
			}
			else
			{
           for(int k=0;k<n;k++)
           { 
           	if(arr_teleport[k]==0)
           	{
                 if(arr_popu[k]>=compare)
                 {
                 	compare=arr_popu[k];

                 	ans=k+1;
                 }
           	}

           }
          cout<<ans<<" ";
      }
           
		}
		cout<<endl;
	}
	return 0;
}