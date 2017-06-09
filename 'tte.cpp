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

void transform(char *str,int len)
{    
	if(len<3)
	{
		return;
	}
	if(str[0]=='(')
	{
		transform(str+1,len-1);
	}
	else
	{
		shift(str+1,len-1);
		cout<<str<<endl;
		transform(str+1,len-1);

	}
}


int main(){
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
     char args[400];
     cin>>args;	

     int lengtht=strlen(args);
     transform(args,lengtht);
      
     for(int i=0;i<lengtht-1;i++)
     {
     	if(args[i]=='(' || args[i]==')')
     	{
     	}
     	else
     	{
     		cout<<args[i];
     	}
     }
     cout<<endl;
	}
}