#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    int testcases;
    cin>>testcases;
    while(testcases--)
	{
		int k;
		cin>>k;
		int array[k][k];
		int counter=((k+1)/2)+1;
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<k;j++)
			{
				if(counter==k+1)
				{
					counter=1;
					array[i][j]=counter;
					counter++;
				}else
				{
					array[i][j]=counter;
					counter++;
				}
			}
			counter=array[i][0]+1;
			if(counter==k+1)
				counter=1;
		}
		for(int i=0;i<k;i++)
		{
			for(int j=0;j<k;j++)
			{
				cout<<array[i][j]<<" ";
			}
			cout<<endl;
		}
	}
     
}