#include<iostream>
using namespace std;
void reverse_string(char *str,int len)
{
	if(len<2)
	{
		return ;
	}
	
	if(str[0]>='a' && str[0]<='z')
	{
		reverse_string(str+1,len-2);
		char temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}else
	{
		reverse_string(str+1,len-1);
	}
	
	
}

int main()
{
	char str[7]="ab%$cd";
	reverse_string(str,6);
	cout<<str;
}