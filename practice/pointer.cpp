#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{ 
     int x=2;
	int *p=&x;
	cout<<p<<endl;
	cout<<*p;
	return 0;
}