#include <iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}

int returnnum(int *arr)
{
int result = arr[0];

for(int i = 1; i < 5; i++){
    result = gcd(result, arr[i]);
}
return result;
}

int main(int argc, char const *argv[])
{
	int testcases;

	cin>>testcases;
	while(testcases--)
	{
        int n;
        cin>>n;
   long long bignote;
   cin>>bignote;
   int m,x,y;
   cin>>m>>x>>y;

   int arr[n];
    for(int i=0;i<n;i++)
    {
    	arr[i]=bignote%10;
    	bignote=bignote/10;

    }
    // for(int i=0;i<n;i++)
    // {
    // 	cout<<arr[i]<<endl;
    // }

     cout<<returnnum(arr)<<endl;
    

	}
	return 0;
}