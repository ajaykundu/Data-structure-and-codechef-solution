#include <stack>
#include <iostream>
using namespace std;

void inertAtbottom(stack<char> &ss,char data)
{
	char temp;
	if(ss.empty())
	{
		ss.push(data);
	}
	temp=ss.top();
	ss.pop();
	inertAtbottom(ss,data);
	ss.push(temp);
}


void reversestack(stack<char>  &ss)
{
	char data;
     if(ss.empty())
     	return;
   data=ss.top();
   ss.pop();
   reversestack(ss);
   inertAtbottom(ss,data);
}


// void printstack(stack<char> s)
// {
// 	if(ss.empty())
// 		return;
// 	cout<<s.top()<<" ";
// 	printstack(s.pop());
// }

int main(int argc, char const *argv[])
{
	stack<char> s;
     s.push('a');
     s.push('b');
     s.push('c');
      
     reversestack(s);
      while(!s.empty())
      {
     cout<<s.top()<<endl;
     s.pop();
     }
	return 0;
}