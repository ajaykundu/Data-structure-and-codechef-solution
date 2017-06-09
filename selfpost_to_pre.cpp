#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class stack
{   public:
	 string arr[30];
	 int top;
	 int capacity;
	 void push(string a);
	 void pop();
	 string topele();
};

void stack::push(string a)
{
	if(top==capacity)
	{
		cout<<"overflow"<<endl;
	}

	arr[top]=a;

	top++;

}

void stack::pop()
{
	if(top==0)
	{
		cout<<"underflow"<<endl;
	}
   
  top--;
   
}

string stack::topele()
{
	return arr[top-1];
}

bool isOperator(char c)
{
	if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='$')
	return true;
	else 
	return false;
}


int main(int argc, char const *argv[])
{
	     char prefix[30];

       cin>>prefix;
       int len=strlen(prefix);
    stack s;
    s.top=0;
    s.capacity=30;
       for(int i=len-1;i>=0;i--)
       {
            if(isOperator(prefix[i]))
            {
                 string s1=s.topele();  s.pop();
                 string s2=s.topele();  s.pop();
                 s2+=prefix[i];
                 s.push(s1+s2);
            }
            else
            {
              string s2="";
              s2+=prefix[i];
              s.push(s2);
            }
       }

       string postfix=s.topele(); s.pop();
       cout<<postfix;
    
	return 0;
}