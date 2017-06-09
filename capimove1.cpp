#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
          int n;
          scanf("%d",&n);

          int arr_pop[n];

          for(int i=0;i<n;i++)
          {
          	scanf("%d",&arr_pop[i]);
          }

         char  arr[n][n];

          for(int i=0;i<n;i++)
          {
          	for(int j=0;j<n;j++)
          	{
                   arr[i][j]='0';
          	}
          }

         

          int start,end;
          for(int i=0;i<n-1;i++)
          {
          	scanf("%d%d",&start,&end);
          	arr[i][i]=1;
            arr[start-1][end-1]='1';
            arr[end-1][start-1]='1';
          }
          arr[n-1][n-1]=1;
          
          for(int i=0;i<n;i++)
          {
          	int compare=0;
          	int ans=0;
          	for(int j=0;j<n;j++)
          	{
                    if(arr[i][j]=='0')
                    {
                    	if(arr_pop[j]>compare)
                    	{    compare=arr_pop[j];
                             ans=j+1;
                    	}
                    }
          	}
          	if(compare)
          	{
          	cout<<ans<<" ";
          }else
          cout<<0<<" ";
          }
          cout<<endl;
          

	}

	return 0;
}