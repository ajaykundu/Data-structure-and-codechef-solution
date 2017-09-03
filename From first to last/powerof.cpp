#include <iostream>
using namespace std;

 int powerof(int x,int n)
{  
      
	if(n==0)
	{
		return 1;
	}
	int a=powerof(x,n/2);
	
	if(n%2==0)
	{

	return a*a;
	}else
	
		
		return a*a*x;
	
	
}

int main()
{
	cout<<powerof(2,20);
	return 0;
}