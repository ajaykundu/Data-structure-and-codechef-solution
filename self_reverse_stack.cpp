#include<iostream>
#include <stack>
using namespace std;

void insertAtbottom(stack<char> &s,char data)
{    cout<<"hello"<<endl;
	char temp;
	if(s.empty())
	{
		s.push(data);
		return;
	}
	temp=s.top();
	s.pop();
	if(s.empty())
	{
}
else{

	insertAtbottom(s,data);
	s.push(temp);
}
}

void stack_reverse(stack<char> &s)
{
	if(s.empty())
		return;
    char data=s.top();
    s.pop();
    if(s.empty())
    {
    
}
else
{
    stack_reverse(s);
    insertAtbottom(s,data);	
}
}



int main(int argc, char const *argv[])
{   
	stack<char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	cout<<"hello"<<endl;
	cout<<s.top()<<endl;
	stack_reverse(s);
	cout<<s.top()<<endl;
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	
	return 0;
}

