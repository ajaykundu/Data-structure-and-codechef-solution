#include <iostream>
using namespace std;
int fact (int n)
{
	if(n==1)
		return 1;
	return ((n*fact(n-1))%1000000000);
}
int main()
{
	while(true)
	{
		int n;
		cin>>n;
		cout<<fact(n)<<endl;
	}
}