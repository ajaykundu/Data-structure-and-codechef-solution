#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
   map<int,int> m;
   int n,m1;
   cin>>n>>m1;
   int start;
   cin>>start;
   m[0]=start;
   int key=1;
   int temp;
   int arr[n];
   arr[0]=start;
   for(int i=1;i<n;i++)
   {
   	   cin>>temp;
   	   arr[i]=temp;
   	   if(start==temp)
   	   {
              key++;
   	   }
   	   else
   	   {
           m[key]=temp;
           key++; 
   	   }
   	   start=temp;
   }
      if(temp==arr[n-2])
      {
            m[n]=temp;
      }
      else 
      	m[n-1]=temp;
    

    map<int,int>::iterator lower;
    lower=m.lower_bound(2);
    cout<<lower->first<<endl;

    map<int,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
    	cout<<itr->first<<" "<<itr->second<<endl;

    }


while(m1--)
    {

        int l,r,k;cin>>l>>r>>k;
        l=l-1;
        r=r-1;
        map<int,int>::iterator lower;
         lower=m.lower_bound(2);
 
            if(r<lower->first)
            {
            	if(r-l>=k)
            	{
            		cout<<arr[r]<<endl;
            	}
            	else
            	if(l==r)
            	{
            		cout<<arr[r]<<endl;
            	}
            	else 
            		cout<<(-1)<<endl;
            }
            else
            {
                 if(l==r)
                 	{
                 		cout<<arr[r]<<endl;
                 	}
                 	else{
                   map<int,int>::iterator itr2;
                   int decider=0;
                 		for(itr2=lower;itr2!=m.end();itr2++)
                 		{
                 			if(itr2->first>=r)
                 			{
                 				if(r-itr2->first+1 >= k)
                 				{
                                    cout<<arr[r]<<endl;
                                    break;
                 				}
                 				
                 			}
                 			if(itr2->first - l >= k)
                 			{
                 				decider=1;
                 				break;
                 			}
                         l=itr2->first;
                 		}

                 		if(decider)
                 		{
                 			cout<<arr[l]<<endl;
                 		}
                 	}

            }
   
}



	return 0;
}