#include <iostream>
#include <algorithm>
using namespace std;

int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }

int main(int argc, char const *argv[])
{
	long long  n,l,r;
     cin>>n>>l>>r;

   long long arr[n];


   for(long long i=0;i<n;i++)
   {

   	cin>>arr[i];
   	
   }
	sort(arr,arr+n);

	long long lowerB[n];
   long long upperB[n];

   long long m=arr[1]-arr[0]+1;
long long number=0;

   for(long long i=0;i<n-1;i++)
   {    
   	long long arrre[n];
   	lowerB[i]=arr[i+1]-arr[i]+1;
       if(lowerB[i]<m)
       {
       	m=lowerB[i];
       number=i;
       }
   	upperB[i]=arr[i+1]+arr[i]-1;
   }

     long long lbbound=arr[1]-arr[0]+1,ubound=arr[1]+arr[0]-1,minimumValue,maximumValue;

     if(lbbound<=r)
     {
     	if(lbbound<l)
     	{
     		lbbound=l;
     	}
     	if(r<ubound)
     	{
     		ubound=r;
     	}
     	minimumValue=lbbound;
     maximumValue=ubound;
     }
     

     for(long long i=1;i<n-1;i++)
     {
     	lbbound=arr[i+1]-arr[i]+1;
     	ubound=arr[i+1]+arr[i]-1;
     	   if(lbbound<=r)
     	   {

            if(l>lbbound)
            {
            	lbbound=l;
            }
 
            if(r<ubound)
            {
            	ubound=r;
            }

        if(minimumValue>lbbound)
        {
        	minimumValue=lbbound;
        }
        maximumValue=ubound;
    }
        
            
     }
    
    long long result=maximumValue - minimumValue +1;

    cout<<result<<endl;

	return 0;
}