#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
      int size;
      cin>>size;

     string arr;
     cin>>arr;

     int encription_number;
     cin>>encription_number;

     for(int i=0;i<size;i++)
     {
     	if(arr[i]>='A' && arr[i]<='Z' )
     	{    
     		int l=arr[i]+encription_number;
     		
     	 if(l>90)
     		{
            int k=90-arr[i];
                 encription_number=encription_number-k;
                 arr[i]='A'+encription_number-1;
     		}
     		else
     		{     
     			
     			arr[i]=arr[i]+encription_number;
     		}


     	}

     	if(arr[i]>='a' && arr[i]<='z')
     	{
     		int l=arr[i]+encription_number;
     		if(l>122)
     		{
                 int k=122-arr[i];
                 encription_number=encription_number-k;
                 arr[i]='a'+encription_number-1;
     		}
     		else
     		{     
     			
     			arr[i]=arr[i]+encription_number;
     		}
     	}
     }

     cout<<arr<<endl;

	return 0;
}