#include <iostream>
using namespace std;
class b;

class a
{
	int x;
public:
	void print();
	friend void exchange(a &first,b &second);
	void putdata(int val)
	{
       x=val;
	}
};

class b
{
   int x;
public:
   void print();
   friend void exchange(a &first,b &second);
   void putdata(int val)
	{
       x=val;
	}

};

void a::print()
{
	cout<<x<<" ";
}

void b::print()
{
	cout<<x<<" ";
}

void exchange(a &first,b & second)
{
	int temp=first.x;
	first.x=second.x;
	second.x=temp;
}

int main(int argc, char const *argv[])
{
	a first;
	b second;
	first.putdata(200);
	second.putdata(100);
	first.print();
	second.print();
	cout<<endl;
	exchange(first,second);
	first.print();
	second.print();
	return 0;
}