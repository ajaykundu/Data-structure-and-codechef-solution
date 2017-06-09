#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printfunction(long long arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
    	int p,q,r;
    	cin>>p>>q>>r;

    	vector<long long> x,y,z;
    	for(int i=0;i<p;i++)
    	{
    		long long num; cin>>num;
    		x.push_back(num);
    	}

    	for(int i=0;i<q;i++)
    	{
    		long long num; cin>>num;
    		y.push_back(num);
    	}

    	for(int i=0;i<r;i++)
    	{
    		long long num; cin>>num;
    		z.push_back(num);
    	}
    	//cout<<"hello";

    	// for(int i=0;i<r;i++)
    	// {
    	// 	cout<<z[i]<<" ";
    	// }

       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       sort(z.begin(),z.end());
     
       long long  xsum[p];
       xsum[0]=x[0];

       
       long long  zsum[r];
       zsum[0]=z[0];

       //cout<<"hello"<<endl;


       for(int i=1;i<p;i++)
       {  
       //	cout<<"hello"<<endl;
             xsum[i]=xsum[i-1]+x[i];
       }

      
       
       for(int i=1;i<r;i++)
       {
             zsum[i]=zsum[i-1]+z[i];
       }
       
      long long anscalculator=0;
      std::vector<long long>::iterator xup,zup;
    
    std::vector<long long>::iterator ylr;

    int max=0;
    if(x[0]>=z[0])
    {
    	max=x[0];
    }
    else{
    	max=z[0];
    }

    ylr=lower_bound(y.begin(),y.end(),max);

    std::vector<long long>::iterator xtemp,ztemp;
  xtemp=x.begin();
  ztemp=z.begin();

      for(int i=(ylr - y.begin());i<q;i++)
      {

         

               xup=upper_bound(xtemp,x.end(),y[i]);

                   long long xsumused=0,xnum=0;
                   if((xup- x.begin())==0){
                         xsumused=0;
                         xnum=0;
                   }
                   else{
                   	      xnum=xup-x.begin();
                             xup--;
                             xsumused=xsum[xup-x.begin()];
                   	                 }

                   	                 

              zup=upper_bound(ztemp,z.end(),y[i]);
                    

               //cout<<"z: " <<(zup-z.begin())<<" yi :"<<y[i]<<endl;
              long long zsumused=0,znum=0;

               if((zup - z.begin())==0)
               {
               	   zsumused=0;
               	   znum=0;
               }
               else {
               	 znum=zup- z.begin();
               	 zup--;
               	 zsumused=zsum[zup-z.begin()];
               }
               
               xtemp=xup;
               ztemp=zup;
              // cout<<"zsumused: "<<zsumused<<" xsumused :"<<xsumused<<" "<<znum<<" "<<xnum<<endl;
          
           long long val=(((zsumused + znum*y[i])%1000000007)*((xsumused + xnum*y[i])%1000000007))%1000000007;

           // cout<<"value of val:"<<val<<endl;
            anscalculator=anscalculator%1000000007 + val%1000000007;
                      anscalculator=anscalculator%1000000007;
      }


        cout<<anscalculator%1000000007<<endl;

    }

}