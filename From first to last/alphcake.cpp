#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
     int casecount=1;
	while(testcases--)
	{

         int r,c;
         cin>>r>>c;
        char arr[r][c];

        for(int i=0;i<r;i++)
        {
        	for(int j=0;j<c;j++)
        	{
        		cin>>arr[i][j];
        	}
        }

        int ansarr[r*c];
        int anscounter=0;
     
       for(int i=0;i<r;i++)
       {
       	for(int j=0;j<c;j++)
       	{
       		   if(arr[i][j]=='?')
       		   {

       		   }else
       		   {
       		   	   ansarr[anscounter]=arr[i][j];
       		        anscounter++;
       		   }
       	}
       }

    int nitr=0;

       for(int i=0;i<r;i++)
       {
       	for(int j=0;j<c;j++)
       	{
       	    if(arr[i][j+1]=='')
       	}
       }
  
     cout<<"Case #"<<casecount<<":"<<endl;
     for(int i=0;i<r;i++)
     {
     	for(int j=0;j<c;j++)
     	{
     		cout<<arr[i][j];
     	}
     	cout<<endl;
     }
	
casecount++;
}
return 0;
}
	
