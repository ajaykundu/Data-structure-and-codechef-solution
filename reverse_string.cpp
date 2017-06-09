#include <iostream>
#include <stdio.h>
using namespace std;

void reverse(char* str,int n)
{
	if(n<2)
		return;
	reverse(str+1,n-2);
	char temp;
	temp=str[0];
	str[0]=str[n-1];
	str[n-1]=temp;
	
}

int main(int argc, char** argv)
{
	char arr[]="ajaykund";
	reverse(arr,8);
	printf("%s",arr);
	return 0;
}