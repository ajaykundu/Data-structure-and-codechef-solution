#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	while(true)
	{
		string n,m;
		cin>>n>>m;
		if(n[0]=='0' && m[0]=='0')
		{
			break;
		}
		else {
			int carrycount=0;
            int carryvalue=0;
			for(int i=0;i<n.length();i++)
			{
				if((((((n[i]-48)+(m[i]-48))+carryvalue)/10))>0)
				{
					carrycount++;
                   carryvalue=1;
				}
				else{
					carryvalue=0;
				}
			}

			if(carrycount==0)
			{
				cout<<"No carry operation."<<endl;
			}
			else {
				cout<<carrycount<<" carry operation."<<endl;
			}
		}
	}
	return 0;
}