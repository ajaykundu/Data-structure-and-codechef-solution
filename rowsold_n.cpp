#include <iostream>
#include <string>
using namespace std;

int countones(string s)
{
	int counter=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			counter++;
		}
	}
	return counter;
}

int onebeforezero(string s)
{
	int counter=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='1' && s[i+1]=='0')
		{
			counter++;
		}
	}
	return counter;
}

long long nummovement(string s,int numone)
{
	long long counter=0;
	numone--;

	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='1')
		{
            int n=s.length()-i;
            n=n-numone;
            numone--;
            counter=counter+n;
		}
	}
	return counter;
}

int breakcounter(string s,int onebzero)
{
	int counter=0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]=='1')
		{
			counter=counter+onebzero;
		}
		if(s[i]=='1' && s[i+1]=='0')
		{
			onebzero--;
		}
	}
	return counter;
}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		string s;
		cin>>s;
		int numone=countones(s);

		long long nummove=nummovement(s,numone);

		int onebzero=onebeforezero(s);
		int breakcount=breakcounter(s,onebzero-1);
		cout<<breakcount+nummove<<endl;


	}
	return 0;
}