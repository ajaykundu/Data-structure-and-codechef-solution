#include <iostream>
using namespace std;

class copyconstructor
{
private:
	int x;
	int y;

public:
	copyconstructor()
	{
		x=10;
		y=10;
	}
	copyconstructor(const copyconstructor &p){

        x=p.x;
        y=p.y;   
	}
	
	void putdata()
	{
		cout<<x<<" "<<y<<endl;
	}

	
};

int main(int argc, char const *argv[])
{
	copyconstructor c1;
	copyconstructor c2=c1;

	c1.putdata();
	c2.putdata();
	
	return 0;
}