#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	   cin>>arr[i];
   }
 
      while(m--)
      {
           int decider=0;
           int element=-2;
 
           int counter=1;
           int l,r,k;
           cin>>l>>r>>k;
 
           for(int i=l-1;i<(r-1);i++)
           {
           	   if(arr[i]==arr[i+1])
           	   {
           	   	counter++;
           	   	if(counter>=(k))
           	   	{
           	   		element=arr[i];
           	   		decider=1;
           	   		break;
           	   	}
           	   	
           	   }
           	   else{
           	   		counter=1;
           	   	}
           	  // cout<<counter<<endl;
           }

                 if(l==r)
                 {
                  decider=1;
                  element=arr[l-1];
                  
                 }

          
          if(decider)
          {
            cout<<element<<endl;
      }
      else
      {
        cout<<(-1)<<endl;
          }
      }
 
	return 0;
} 