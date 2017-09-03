#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[6];
	int arr1[6];
	for(int i=0;i<6;i++)
	{
		cin>>arr[i]>>arr1[i];
	}

	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	for(int i=0;i<6;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<endl;

   cout<<arr[0]<<" "<<arr1[0]<<endl;
     
   int k=arr1[0];

     for(int i=1;i<6;i++)
     {
               if(k==arr[i])
               {
                   cout<<arr[i]<<" "<<arr1[i];
                     k=arr1[i];

               }
               else
               {
               	cout<<arr1[i]<<" "<<arr[i];
               	k=arr[i];
               }
               cout<<endl;
     }

	return 0;
}