#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int **a=(int **)malloc(sizeof(int*)*5);
	for(int i=0;i<5;i++)
	{
		a[i]=(int *)malloc(sizeof(int)*4);
	}
	a[1][2]=4;
	cout<<a[1][2]<<endl<<a[2][2]<<endl;
	return 0;
}