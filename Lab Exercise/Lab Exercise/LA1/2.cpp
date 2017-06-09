#include <iostream>
using namespace std;
int main()
{
	int i,j,k,n,a[30];
	cout<<"How many elements?\n";
	cin>>n;
	cout<<"\nEnter elements of array\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"index of the element you want to delete?\n";
	cin>>k;
	for(i=k;i<n-1;i++){
		a[i]=a[i+1];
	}
	cout<<"Deleting the specified element of array\n";
	for(i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}