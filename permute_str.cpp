#include <iostream>
using namespace std;
void swap(char *str1,char *str2)
{
	char temp=*str1;
	*str1=*str2;
	*str2=temp;
}

void permute(char *str,int l,int r)
{
	if(l==r-1)
	{
		cout<<str<<endl;
		return;
	}

	for(int i=l;i<r;i++)
	{
		swap(str+l,str+i);
		permute(str,l+1,r);
		swap(str+l,str+i);
	}

}

int main(int argc, char const *argv[])
{

	char arr[6]="abcde";
	permute(arr,0,5);
	return 0;
}

