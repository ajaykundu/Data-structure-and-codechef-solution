#include <iostream>
using namespace std;

// #define max 100;

// Implementation of stack using classes.
class stack
{
	
	int tope;   // for finding the top element;
	int arr[100]; // for the storing of the data into the stack.

public:
	stack()
	{
		tope=0;
	}
   int insert(int data); // for the insert of the data into the stack.
   int pop();// for the deleting of the upper element from the stack.
   void top();// for the printing of the upper element of the stack.
	~stack(){};
};

int stack::insert(int data)
{
	if(tope==100)
	{
		cout<<"Overflow no more memory is available"<<endl;
	 return 0;
	}

	tope++;
	arr[tope]=data;
	return 1;
}

int stack::pop()
{
	if(tope==0)
	{
		cout<<"UnderFlow no element in the stack"<<endl;
		return 0;
	}
	tope--;
	return 1;
}

void stack::top()
{
	if(tope==0)
	{
           cout<<"No element is present in the stack"<<endl;
	       return ;
	}
	cout<<arr[tope]<<endl;

}

int main(int argc, char const *argv[])
{
	stack s1;
	s1.insert(10);
	s1.top();
	s1.insert(20);
	s1.insert(30);
	s1.top();
	s1.pop();
	s1.top();
	return 0;
}