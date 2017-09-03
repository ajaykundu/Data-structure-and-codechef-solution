#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
    	int p,q,r;
    	cin>>p>>q>>r;

    	long long x[p],y[q],z[r];
    	for(int i=0;i<p;i++)
    	{
    		cin>>x[i];
    	}

    	for(int i=0;i<q;i++)
    	{
    		cin>>y[i];
    	}

    	for(int i=0;i<r;i++)
    	{
    		cin>>z[i];
    	}
       long long anscalculator=0;


       for(int i=0;i<q;i++)
       {
       	   long long xnum=0;
       	   long long xsum=0;

       	   for(int j=0;j<p;j++)
       	   {
       	   	    if(x[j]<=y[i])
       	   	    {
       	   	    	xnum++;
       	   	    	xsum=xsum+x[j];
       	   	    }
       	   }

       	   long long znum=0;
           long long zsum=0;
            
            for(int j=0;j<r;j++)
            {
            	if(z[j]<=y[i])
            	{
            		znum++;
            		zsum=zsum+z[j];
            	}
            }
              
             

      anscalculator=anscalculator +  (xsum + xnum*y[i])*(zsum + znum * y[i]);
       }

       cout<<anscalculator<<endl;

    }
	return 0;
}