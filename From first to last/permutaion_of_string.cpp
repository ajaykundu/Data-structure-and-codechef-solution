#include <iostream>
using namespace std;

void swap(char *a,char *b)
{
	char temp=*a;
	*a=*b;
	*b=temp;
}

void permute(char *str,int l,int r)
{
	if(l==r)
	{
		cout<<str;
		cout<<endl;
	}
	else
	{
		for(int i=l;i<r;i++)
		{
			
			swap(str[l],str[i]);
			permute(str,l+1,r);
            swap(str[l],str[i]);
		}
	}
}

int main(int argc, char** argv)
{
	char arr[4]="abc";
	permute(arr,0,3);
	return 0;
}