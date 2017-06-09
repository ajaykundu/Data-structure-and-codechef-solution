#include <iostream>
#include <vector>
#include <algorithm>
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
 
        std::vector<int> element;
        std::vector<int> frequency;
        std::vector<int> left;
 
         element.push_back(arr[0]);
         frequency.push_back(1);
        left.push_back(0);
            
            int ele=0,freq=0,lef=0;
 
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]==arr[i+1])
                {
                  frequency[freq]+=1;
                     lef++;  
                }
                else
                {
                  ele++;
                  freq++;
                  lef++;
                    element.push_back(arr[i+1]);
                  frequency.push_back(1);
                  left.push_back(lef);
                                  }
            }
 
            // for(int i=0;i<element.size();i++)
            // {
            //   cout<<element[i]<<" "<<frequency[i]<<" "<<left[i]<<endl;
            // }
 
 
            while(m--)
            {
 
        int l,r,k;
        cin>>l>>r>>k;
        r=r-1;
        l=l-1;
 
         int ansele=0;
         int decider=0;
       int nexxt=1;
         int counter=0;
 
               if(l==0 && r==1)
               {
 
                if(arr[l]==arr[r])
                {
                  cout<<arr[l]<<endl;
                }
                else
                {
                  cout<<(-1)<<endl;
                }
    }
    else
      if(l==r)
      {
          cout<<arr[l]<<endl;
      }
      else
    {
            
            vector<int>::iterator low;
             low=lower_bound(left.begin(),left.end(),l);
         counter=*low;
    //cout<<counter<<endl;
         if(left[counter]-l >= k)
         {
          decider=1;
           ansele=element[counter-1];
           nexxt=0;
         } 
 
         int nextcounter=counter;
         if(nexxt)
         {
         for(;(left[nextcounter]<=r && nextcounter<left.size());nextcounter++)
         {
          if(frequency[nextcounter]>=k)
          {
             //cout<<nextcounter<<endl;
            decider=1;
            ansele=element[nextcounter];
            break;
          }
        
 
         }
         // cout<<nextcounter<<endl;
         // cout<<ansele<<endl;
      if(decider!=1)
      {
         if(r- left[nextcounter-1]>=k)
         {
          decider=1;
          ansele=element[nextcounter-1];
         }
     }
 
     }
 
   if(decider)
     cout<<ansele<<endl;
       else
        cout<<(-1)<<endl;
   }
 
}
 
  return 0;
} 