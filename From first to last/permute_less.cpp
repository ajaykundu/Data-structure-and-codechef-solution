#include <iostream>
using namespace std;
void perm(int *arr,int l,int n)
{
    if(l==n+1)
    {  
    	// cout<<"hello"<<endl;
    	for(int i=1;i<=n;i++)
    	{
    		cout<<arr[i]<<" ";
    	}
    	cout<<endl;
    	return;
    }
   arr[l]=arr[l-1]+1;
   while(arr[l]<10)
   {
   	perm(arr,l+1,n);
   	arr[l]++;
   }

}

void per(int n){
	int arr[n+1];
	arr[0]=-1;
	cout<<"Hello"<<endl;
	perm(arr,1,n);
}



int main(int argc, char const *argv[])
{
	per(2);
	return 0;
}