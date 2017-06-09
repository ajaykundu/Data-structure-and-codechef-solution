#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
     {
     	int n;
     	cin>>n;

     	int arr[n];

     	int nevsum=0;
     	int positivesum=0;
     	int  numpositive=0;

     	for(int i=0;i<n;i++)
     	{
           int num;  cin>>num;


           if(num<0)
           {
           	nevsum+=num;
           }
           else{
           	positivesum+=num;
           	numpositive++;
           }
     	}

     	cout<<nevsum + positivesum*numpositive<<endl;
     }
	return 0;
}