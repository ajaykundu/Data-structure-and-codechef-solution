#include <iostream>
using namespace std; 
int toh(int n,char s,char h,char d)
{   int count=0;
	if(n==0)
	{
		return 0;
	}
    count+=toh(n-1,s,d,h);
    
	count+=1;
	cout<<"move disk "<<n<<" from "<<s<<" to "<<d<<endl;
	count+=toh(n-1,h,s,d);
return count;
}
int main(int argc, char** argv)
{
	cout<<toh(4,'a','b','c');
	return 0;
}