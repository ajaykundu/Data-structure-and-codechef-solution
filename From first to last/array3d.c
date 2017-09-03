#include <stdio.h>
int main(int argc, char** argv)
{
	int ***array=(int ***)malloc(sizeof(int)*3);
	int i,j,k;
	for(i=0;i<3;i++)
	{
       array[i]=(int **)malloc(sizeof(int)*4);
          for(j=0;j<4;j++)
		  {
        array[i][j]=(int *)malloc(sizeof(int)*2);
		  }
	}
	array[1][1][1]=1;
	printf("%d",array[1][1][1]);
	return 0;
}