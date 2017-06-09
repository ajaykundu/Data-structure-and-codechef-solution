#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		string st;
		cin>>st;

		bool S=false,E=false,C=false;
		bool decision=true;

		for(int i=0;i<st.length();i++)
		{
			if(st[i]=='C')
			{
				if(E || S)
				{
                   decision=false;
                   break;
				}
				else {
					C=true;
				}

			}
			else if(st[i]=='E')
			{
				if(S)
				{
					decision=false;
					break;
				}
				else {
					E=true;
				}
			}
			else {
				S=true;
			}
		}

		if(decision)
		{
			cout<<"yes"<<endl;
		}
		else {
			cout<<"no"<<endl;
		}
	}
	return 0;
}