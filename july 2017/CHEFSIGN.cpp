#include <iostream>
#include <string>
using namespace std;

int signcal(string str)
{   
	int val=1000001;

	int maxval=1000001;
	int minval=1000001;

	for(int i=0;i<=str.length();i++)
	{
		if(str[i]=='<')
		{
			val++;
		}
		else if(str[i]=='>')
		{
			val--;
		}
		if(val>maxval)
		{
			maxval=val;
		}
		if(val<minval)
		{
			minval=val;
		}
	}

	//cout<<maxval<<" "<<minval<<endl;
   return (maxval - minval)+1;
}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
       string str;
       cin>>str;
      
       	cout<<signcal(str)<<endl;
       
	}
	return 0;
}