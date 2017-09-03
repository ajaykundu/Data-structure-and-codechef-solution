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


   for(int i=0;i<n;i++)
   {

   	cin>>arr[i];
   	
   }

 sort(arr,arr+n);

  
   

   long long lowerB[n];
   long long upperB[n];
    
int min=arr[1]-arr[0]+1;
int number=0;

   for(int i=0;i<n-1;i++)
   {
   	lowerB[i]=arr[i+1]-arr[i]+1;
       if(lowerB[i]<min)
       {
       	min=lowerB[i];
       number=i;
       }
   	upperB[i]=arr[i+1]+arr[i]-1;
   }


  int max=arr[n-1]+arr[n-2]-1;
     
       
        
     if(min>=l && max<=r)
     {
     	cout<<max-min+1<<endl;
     }
     else if(min<l && max>=l && max<=r)
     {
            cout<<max-l+1<<endl;
     }else if(min<l && max<l)
     {
     	cout<<0<<endl;
     }
     else if(min<l && max>r)
     {
     	cout<<r-l+1<<endl;
     }
     else if(max>l && min>r)
     {
     	cout<<0<<endl;
     }
     else if(min>=l && min<=r && max>r)
     {
     	cout<<r-min+1<<endl;
     }



	return 0;
}