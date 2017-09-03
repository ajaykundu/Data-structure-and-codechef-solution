#include <iostream>
using namespace std;

class objswap
{
	int data;
public:
	void getdata(int val);
	void putdata(){
		cout<<data<<endl;
	}
	void change(objswap &ch);
	
	objswap(){};
	~objswap(){};
	
};

void objswap::change(objswap & ch)
{    data=15;
       ch.data=20;
}

void objswap::getdata(int val){
	data=val;
}
int main(int argc, char const *argv[])
{
	/* code */
	objswap ch;
	ch.getdata(10);
    ch.putdata();

    objswap ch1;
    ch1.getdata(8);
    ch1.putdata();
    ch.change(ch1);
    ch.putdata();
    ch1.putdata(); 
    

	return 0;
}