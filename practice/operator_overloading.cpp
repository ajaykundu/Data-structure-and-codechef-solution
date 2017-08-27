#include <iostream>
using namespace std;

class operatorOver{
    int x;
public:
	void getdata(int val){
               x=val;
	}
	void putdata(){
		cout<<x<<endl;
	}
	friend void operator-(operatorOver&);
};

void operator-(operatorOver &t)
	{
	    t.x=-t.x;
	}

int main(int argc, char const *argv[])
{
	operatorOver op;
	op.getdata(10);
	op.putdata();
	-op;
	op.putdata();
	return 0;
}