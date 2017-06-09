#include <iostream>
using namespace std;
int xish(char *str,char *set)
{
	if(set[0]=='\0')
		return 1;
	if(str[0]=='\0')
		return 0;
	int iter=0;
	while(set[iter]!='\0')
	{
		if(set[iter]==str[0])
		{   
			return xish(str+1,set+1);
		}
		iter++;
	}
	return xish(str+1,set);
}

int main()
{
	char str[7]="ajayku";
	char set[4]="atu";
	cout<<xish(str,set);
	
}