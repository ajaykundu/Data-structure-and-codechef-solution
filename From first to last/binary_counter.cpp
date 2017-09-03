#include <iostream>
using namespace std; 
void permutebin(int *arr,int i,int n){
	if(i==n)
	{
		for(int j=0;j<n;j++)
			cout<<arr[j];
		cout<<endl;
		return;
	}
	arr[i]=1;
	permutebin(arr,i+1,n);
	arr[i]=0;
	permutebin(arr,i+1,n);
}

int main(int argc, char** argv)
{
	int arr[6];
	permutebin(arr,0,6);
	return 0;
}
