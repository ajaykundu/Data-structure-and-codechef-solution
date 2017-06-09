#include<stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	//printf("%f",pow(2,3));
	  
	  int i=0;
	  cin>>i;
	  int sum=0;
	  for(int j=0;j<=i;j++)
	  {
	  	sum=sum+j;
	  }

   cout<<sum;
	return 0;
}