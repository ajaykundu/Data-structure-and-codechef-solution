
#include <iostream>
using namespace std;
 
 
 
int main(int argc, char const *argv[])
{
	int arr_len;
	cin>>arr_len;
	int  startp;
	cin>>startp;
	int  endp;
	cin>>endp;
 int  arr[arr_len];
   
	for( int i=0;i<arr_len;i++)
	{
              cin>>arr[i];          
 	}
 
    int counter=0;
    int decider=0;
 
   for(int i=startp;i<=endp;i++)
   {
         for(int j=0;j<arr_len;j++)
         {
         	for(int k=j+1;k<arr_len;k++)
         	{

                      if(i>=arr[j] && i>=arr[k])
	             {
		             if(i<arr[j]+arr[k]){
			               decider=1;
			               counter++;
			               break;
		           }
	           }
                       else
                       	if(arr[j]>=i && arr[j]>=arr[k])
	             {
		             if(arr[j]<i+arr[k]){
			               decider=1;
			               counter++;
			               break;
		           }
	           }

	             else
                       	if(arr[k]>=i && arr[k]>=arr[j])
	             {
		             if(arr[k]<i+arr[j]){
			               decider=1;
			               counter++;
			               break;
		           }
	           }


         		
         	}
         	if(decider)
         	{
         		break;
         	}
         }
         decider=0;
   }
   cout<<counter<<endl;
   
	return 0;
} 
