#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int lenstr;
		cin>>lenstr;

		string str;
		cin>>str;

		stack<char> s;
	s.push('p');
       int decider=1;
	     for(int i=0;i<lenstr;i++)
	     {
	     	if(str[i]=='H')
	     	{
	     		if(s.top()=='H')
	     		{
	     			decider=0;
	     			break;
	     		}
	     		else {
	     			s.push(str[i]);
	     		}
	     	}
	     	else if(str[i]=='.')
	     	{
	     		//do nothing.
	     	}
	     	else if(str[i]=='T')
	     	{
	     		if(s.top()=='H')
	     		{
	     			s.pop();
	     		}
	     		else{
	     			decider=0;
	     			break;

	     		}
	     	}
	     }
        
        if(s.top()!='p')
        {
          decider=0;
        }

	     if(decider)
	     {
	     	cout<<"Valid"<<endl;
	     }
	     else {
	     	cout<<"Invalid"<<endl;
	     }
	}
	
	return 0;
}