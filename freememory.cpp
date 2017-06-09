#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;



int main(int argc, char const *argv[])
{
	
	int* p=(int*)malloc(sizeof(int));
    *p=10;
    cout<<*p<<endl;

	int* k=p;
   free(k);
   cout<<*p;

	return 0;
}