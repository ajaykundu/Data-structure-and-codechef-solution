#include <iostream>
using namespace std;
int main(int argc, char** argv)
{         
	   int n;
	   cin>>n;
	   
	    int array[n][2*n];
	    for(int i=0;i<n;i++)
		{
			for(int j=0;j<2*n;j++)
			{
				array[i][j]=0;
			}
		}
	
		cout<<endl;

		array[0][n]=1;
		for(int i=1;i<n;i++)
		{
			for(int j=1;j<2*n;j++)
			{
               array[i][j]=array[i-1][j-1]+array[i-1][j+1];
			}
		}
	   
	    for(int i=0;i<n;i++)
		{
				
			for(int j=0;j<2*n;j++)
			{    
			
				
				if(array[i][j]==0)
				{
					cout<<" ";
				}
				else
				cout<<array[i][j];
			}
			cout<<endl;
		}
	   
	    
	return 0;
}