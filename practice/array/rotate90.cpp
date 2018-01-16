#include <iostream>
using namespace std;

int main()
{
     int m,n;
	 cin>>m>>n;
	 
	 char arr[m][n];
	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
		 {
		 	cin>>arr[i][j];
		 }
	 }
	 	 for(int i=0;i<m;i++)
	 {
	 	for(int j=0;j<n;j++)
		 {
		 	cout<<arr[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 char arr1[n][m];
	 for(int i=0;i<m;i++)
	 {
       for(int j=0;j<n;j++)
	   {
	   	arr1[j][m-i-1] = arr[i][j];
	   }
	 }
	 
	 for(int i=0;i<n;i++)
	 {
	 	for(int j=0;j<m;j++)
		 {
		 	cout<<arr1[i][j]<<" ";
		 }
		 cout<<endl;
	 }
}