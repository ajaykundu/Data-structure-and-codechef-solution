#include <iostream>
#include <string>
using namespace std;

class frequency{
	
	int  fren[256];
public: 
	void intiatefrequency();// intiate the frequency to zero.
	void frequencyCalculater(string str);// for the calculation of the frequency.
    void printfreuency();// this will print the frequency corresponding to given string.

};

void frequency::intiatefrequency()
{
	for(int i=0;i<256;i++)
	{
		fren[i]=0;
	}
}

void frequency::printfreuency()
{
	for(int i=0;i<256;i++)
	{
		if(fren[i]==0)
		{
			//do nothing.
		}
		else{
			cout<<char(i)<<" "<<fren[i]<<endl;
		}
	}
}

void frequency::frequencyCalculater(string str)
{
	for(int i=0;i<str.length();i++)
	{
            fren[str[i]]++;
	}
}

int main(int argc, char const *argv[])
{
	
	string str;
	getline(cin,str);

	frequency f1;
	f1.intiatefrequency();
	f1.frequencyCalculater(str);
	f1.printfreuency();

	return 0;
}