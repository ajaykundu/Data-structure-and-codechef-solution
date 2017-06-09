#include<iostream>
using namespace std;
int main()
{
	int siz_arr; cin>>siz_arr;
	int arr[siz_arr];
	for(int i=0;i<siz_arr;i++)
	{
		cin>>arr[i];
	}
	int t=0;
	int l=arr[0],m=arr[1],n=arr[2];
       
       for(int i=0;i<3;i++)
	   {
	   	for(int j=i+1;j<3;j++){
			   
			   if(arr[i]<arr[j])
			   {
                  t=arr[i];
                  arr[i]=arr[j];
                  arr[j]=t;
			   }
			   
		   }
	   }
	   l=arr[0];
	   m=arr[1];
	   n=arr[2];
	   cout<<l<<endl<<m<<endl<<n<<endl;
	   
	   for(int i=3;i<siz_arr;i++)
	   {
	   	if(arr[i]>l && arr[i]>m && arr[i]>n )
		   {
              n=m;
              m=l;
              l=arr[i];
		   }
		   else
		   {
			   if(arr[i]>m && arr[i]>n)
			   {
			   	n=m;
			   	m=arr[i];
			   }
			   else
			   {
				   if(arr[i]>n)
				   {
				   	n=arr[i];
				   }
			   }
		   }
         
	   }
	   cout<<m;
}