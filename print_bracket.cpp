#include <iostream>
using namespace std;
// we take c for controlling the open braket.
//d for controling closing bracket.

void perm(char *arr,int c,int n,int l,int d)
{
       if(l==n)
       {
       	for(int i=0;i<=n;i++)
       	{
       		cout<<arr[i];
       	}
       	cout<<endl;
       	return;
       }

	if(c>0)
	{ 
		arr[l]='{';
		perm(arr,c-1,n,l+1,d);
	if(d>0 && c<=d)	{
		arr[l]='}';
		perm(arr,c,n,l+1,d-1);
	}
		
	}else
	if(d>0)
	{

		arr[l]='}';
		perm(arr,c,n,l+1,d-1);
	}
	
}

void pemu(int n)
{
	char arr[2*n];
	arr[0]='{';
	arr[2*n-1]='}';
	perm(arr,n-1,2*n-1,1,n-1);
}

int main(int argc, char const *argv[])
{
	while(true)
	{
		int a;
		cin>>a;
		pemu(a);
	}
	return 0;
}