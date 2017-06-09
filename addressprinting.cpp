#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	  int fun(int);
	  int i=fun(10);
	  printf("%d",--i);
	  return 0;
}
int fun(int i)
{   cout<<(i++);
   printf("%d",i);
	return (i++);
}