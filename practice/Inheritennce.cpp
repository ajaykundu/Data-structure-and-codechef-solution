#include <iostream>
using namespace std; 

class B{
    int a;
public:
	int b;
	void get_ab();
	int get_a();
	void show_a(void);
};

class D: private B
{
     int c;
 public:
 	void mul();
 	void display();
};

void B::get_ab()
{
	cin>>a>>b;
}

int B::get_a()
{
	return a;
}

void B::show_a()
{
	cout<<"a= "<<a<<endl;
}

void D::mul()
{     get_ab();
     c=b*get_a();
}

void D::display(){
	show_a();
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
}

int main(int argc, char const *argv[])
{
	D d;
	d.mul();
	d.display();
	return 0;
}