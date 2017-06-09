#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	 
	 int a=1026;
	 int *p=&a;

	 cout<<*p<<endl;

	 char *p1;
	 p1=(char*)&a;
	 cout<<(int)*p1;
	return 0;
}