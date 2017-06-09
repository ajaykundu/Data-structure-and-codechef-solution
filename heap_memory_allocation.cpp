#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */

	int *p;
	p=(int *)malloc(sizeof(int));

	*p=10;
	cout<<*p;

    free(p);
	p=(int*)malloc(sizeof(int));
	*p=20;
	cout<<*p;
	return 0;
}