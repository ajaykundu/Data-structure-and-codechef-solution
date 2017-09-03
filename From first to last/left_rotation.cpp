#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void check_index(int* arr,int query_number)
{
     cout<<arr[query_number]<<endl;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   int Size;
   cin>>Size;
   int N_shift;
   cin>>N_shift;
 int N_query;
  cin>>N_query;

   int arr[Size];
    
    for(int i=0;i<Size;i++)
    {
    	cin>>arr[i];
    }    
    
    for(int i=0;i<N_shift;i++)
    {
    	int l=arr[Size-1];
    	for(int j=Size-1;j>0;j--)
    	{
    		arr[j]=arr[j-1];
    	}

    	arr[0]=l;
    }


 
  while(N_query--)
  {
      int query_number;
      cin>>query_number;
      check_index(arr,query_number);
  }




    return 0;
}
