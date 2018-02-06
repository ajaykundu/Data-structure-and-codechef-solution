#include <iostream>
#include <string>
using namespace std;



int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string str;
		cin>>str;
		int count=0;
		int len = str.length();
		
		for(int i=0; len > 3 && (i < (len -3 ));i++)
		{  
			int c=0,h=0,e=0,f=0;
			for(int j=i;j<(i+4);j++)
			{
				if(str[j]=='c')
				{
					c=1;
				}else if(str[j]=='h')
				{
					h=1;
				}else if(str[j]=='e')
				{
					e=1;
				}else if(str[j]=='f')
				{
					f=1;
				}
				else {
					i=j;
					break;
				}
			}
			if(c && h && e && f)
				count++;
		}
		
		if(count)
		{
			cout<<"lovely "<<count<<endl;
		}
		else cout<<"normal"<<endl;
	}
	return 0;
}