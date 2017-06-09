#include<iostream>
#include<string.h>
using namespace std;

void shift(char *str,int len)
{
	char a=str[0];
	int i;
	for(i=0;i<len-1;i++)
	{
      str[i]=str[i+1];
	}
	str[i]=a;
}

int main()
{
	char arr[400];
	cin>>arr;
	int length=strlen(arr);
	shift(arr+1,length-1);
	cout<<arr;


}