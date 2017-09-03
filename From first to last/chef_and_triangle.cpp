#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char** argv)
{     
	int testcase;
	cin>>testcase;
	int enter_number;
	while(testcase>0)
	{
	scanf("%d",&enter_number);
	int counter=0;
	int intial=1;
	while(enter_number>=intial)
	{
		counter++;
		enter_number=enter_number-intial;
		intial++;	
	}
	printf("%d\n",counter);
	testcase--;
	}
	return 0;
}