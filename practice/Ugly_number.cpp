#include <iostream>
using namespace std;

int requiredPrime(int n)
{
	while(n%2==0)
	{
          n=n/2;
          if(n==1)
      	return 1;
	}
      
	while(n%3==0)
	{
		n=n/3;
		if(n==1)
	{
		return 1;
	}
	}
	
	while(n%5==0)
	{
		n=n/5;
		if(n==1)
	{
		return 1;
	}
	}
	
	return 0;
}

int num(int n)
{    if(n==1)
	   return 1;
	   n--;
	   int i=2;
	while(n)
	{
		if(requiredPrime(i)==1)
		{
			n--;
		}
		i++;
	}
	return (i-1);
}


int main(int argc, char const *argv[])
{
    int n;
    while(1)
    {
    	cin>>n;
    	cout<<num(n)<<endl;
    }
	return 0;
}