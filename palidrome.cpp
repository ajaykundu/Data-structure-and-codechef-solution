#include <iostream>
using namespace std;
int ispalidrom(char *str,int len)
{
	if(len<2)
	{
		return 1;
	}
	
	if(str[0]==str[len-1])
	{
		return ispalidrom(str+1,len-2);
	}
	else
	{
		return 0;
	}
	
	
}
int main()
{
	cout<<ispalidrom("ajjaf",5);
}