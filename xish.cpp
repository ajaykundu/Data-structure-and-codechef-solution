#include<iostream>
using namespace std;
int xish(char *str,char *set)
{
	if(set[0]=='\0')
		return 1;
	int i=0;
	while(str[i]!=set[0])
	{
		if(str[i]=='\0')
			break;
		i++;
	}
	if(str[i]=='\0')
	{
		return 0;
	}
	else
	{
		return xish(str,set+1);
	}
}

int main()
{
	char str[7]="ajayku";
	char set[4]="aku";
	cout<<xish(str,set);
	
}