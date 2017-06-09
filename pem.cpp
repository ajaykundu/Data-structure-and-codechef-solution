#include <iostream>
using namespace std; 
#define mod 1000000007

 long long powerof(long long n)
{  
      
	if(n==0)
	{
		return 1;
	}
	long long a=powerof(n/2);
	
	if(n%2==0)
	{

	return (a*a)%mod;
	}else
	
		
		return (a*a*2)%mod;
	
	
}

int main()
{
	
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		long long n;
		cin>>n;
    long long k=powerof(n-1);
   
    k=k%mod;
    if(k==1)
	{
		cout<<0<<endl;
	}else
	
	{
		
	
    long long t=2%mod;
    long long z=((k-t)+mod);
    cout<<z%mod<<endl;
	}
		
	}
}