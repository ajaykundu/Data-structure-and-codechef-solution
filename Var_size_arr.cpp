#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int num_var;
	int num_query;
	cin>>num_var;
	cin>>num_query;
   
   int **arr=(int **)malloc( num_var * sizeof(int *));
         

     for(int i=0;i<num_var;i++)
     {  
     	int sizet;
            cin>>sizet;
     	arr[i]=(int *)malloc(sizet * sizeof(int));
     	for(int j=0;j<sizet;j++)
     	{
     		cin>>arr[i][j];
     	}
     }

     for(int i=0;i<num_query;i++)
     {
     	int a,b;
     	cin>>a>>b;
     	cout<<arr[a][b]<<endl;
     }

	return 0;
}