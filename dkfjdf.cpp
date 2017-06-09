#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int ***array=(int ***)malloc(sizeof(int)*3);
	for(int i=0;i<3;i++)
	{
       array[i]=(int **)malloc(sizeof(int)*4);
          for(int j=0;j<4;j++)
		  {
        array[i][j]=(int *)malloc(sizeof(int)*2);
		  }
	}
	
}
