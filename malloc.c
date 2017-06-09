#include <stdio.h>
int main(int argc, char** argv)
{
	int *a=(int *)malloc(10000000000000000000);
	printf("%p",a);
	
	
	int *b=(int *)malloc(2000);
    printf("\n%p",b);
	return 0;
}