#include <iostream>
using namespace std;
template<typename t>
class stack
{
	t arr[30];
	int top1;
	int capacity;
public:
	stack(){
		top1=0;
		capacity=5;
	}
   void push(t data);   // for the pushing of the function.
   void pop();
   t top();
   int isEmpty();
   int overflow();
   int underflow();
	
	
};


template<typename t>
int stack<t>::overflow()
{
    if(top1>=capacity)
    {
    	return 1;
    }
    return 0;
}

template<typename t>
int stack<t>::underflow()
{
       if(top1<=0)
       {
       	return 1;
       }
       return 0;
}
template<typename t>
void stack<t>::push(t data)
{
       if(overflow())
       {
       	  cout<<"The stack is full."<<endl;
       }
       else
       {
       	   arr[top1]=data;
       	   top1++;
       }
}
template<typename t>
void stack<t>::pop()
{
    if(underflow())
    {
    	cout<<"The stack is empty."<<endl;
    }
    else
    {
    	top1--;
    }
}
template<typename t>
t stack<t>::top(){
         if(underflow())
         {
         	cout<<"The stack is empty."<<endl;
         	return -1;

         }
         else{
         	cout<<"hello world"<<endl;
         	cout<<top1<<endl;
              return arr[top1-1];
         }
}

int main(int argc, char const *argv[])
{
	stack<char> s;
	s.push(97);
	s.push(97);s.push(97);s.push(97);s.push(97);s.push(97);s.push(97);
    cout<<s.top();

	return 0;
}