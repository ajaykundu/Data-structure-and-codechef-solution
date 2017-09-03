#include <iostream>
using namespace std;
int countinstances(char *str,char needle)
{
	if(str[0]=='\0')
		return 0;
	if(str[0]==needle)
	{
		return 1+countinstances(str+1,needle);
	}else
	{
		return countinstances(str+1,needle);
	}
}
int main(int argc, char** argv)
{
	cout<<countinstances("ajaykunduajay",'a');
	return 0;
}