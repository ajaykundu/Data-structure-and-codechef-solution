#include <iostream>    
#include <algorithm>    
#include <vector> 
#include <stdio.h>
using namespace std;

int bingreater(int arr[],int query)
{

}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
          int n,q;    cin>>n>>q;
         std::vector<int> v;

         for(int i=0;i<n;i++)
         {
             int val; scanf("%d",&val);
             v.push_back(val);
         }

          sort(v.begin(),v.end());

          for(int i=0;i<q;i++)
          {
            int query;  scanf("%d",&query);
            std::vector<int>::iterator indexofgreater;
             indexofgreater=std::lower_bound(v.begin(),v.end(),query);
            int num=indexofgreater - v.begin();
            //cout<<"Num is output here: "<<num<<endl;
            int anscounter=(n- num);
           // cout<<"direct answer conter : "<<anscounter<<endl;
            
            int size=0;
               size=n- anscounter -1;
             
            int j=num-1;
            while(size>=0)
            {  
                        size=size - (query- v[j]);
                        // cout<<"size:"<<size<<"anscounter: "<<anscounter<<" "<<endl;
                        if(size>=0)
                          anscounter++;
                        size--;
                        j--;
            }
            cout<<anscounter<<endl;
          }


	}
	return 0;
}