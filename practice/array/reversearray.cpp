#include <iostream>
#include <string>
using namespace std;

void swap(char &a,char &b)
{
	char temp = a;
	a=b;
	b=temp;
}
void reverse(string &str,int l,int h)
{   
	if(h<=l)
		return;
	swap(str[l],str[h]);

	reverse(str,l+1,h-1);
}

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string str;
		cin>>str;
		reverse(str,0,str.length()-1);
		cout<<str<<endl;
	}
	return 0;
}