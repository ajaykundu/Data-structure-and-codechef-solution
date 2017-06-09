#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	int *arr=(int *) calloc(5,sizeof(int));
    for(int i=0;i<5;i++)
    {
    	cout<<arr[i]<<" ";
    }
	return 0;
}

