#include <iostream>
using namespace std;
#include <stdio.h>
void swap(char *,char *);
int main(int argc, char** argv)
{
	char *pstr[2]={
		"hello",
		"Good morning"
	};
	swap (pstr[0],pstr[1]);
	cout<<pstr[0]<<endl;
	printf("%s\n%s",pstr[0],pstr[1]);
	return 0;
}
void swap(char *t1,char *t2){
	char *t;
	t=t1;
	t1=t2;
	t2=t;
}
