#include <iostream>
using namespace std;
int main()
{
	int i,j,pos,value,n,a[30];
	cout<<"How many elements?\n";
	cin>>n;
	cout<<"\nEnter elements of array\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"index of the element you want to insert a new element?\n";
	cin>>pos;
	cout<<"enter the element\n";
	cin>>value;
	if (pos==n) {
		a[pos]=value;
	}
	else if (pos>n) {
		cout<<"index out of range\n";
	}
	else{
		for(i=n-1;i>=pos;i--){
			a[i+1]=a[i];
		}
		a[pos]=value;
	}
	cout<<"Inserting the specified element of array\n";
	for(i=0;i<n+1;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}