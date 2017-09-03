#include <iostream>
using namespace std;
int instancecount(char *hay,char needle)
{
	if(hay[0]=='\0')
	{
		return 0;
	}
	
	if(hay[0]==needle)
	{
		return 1+instancecount(hay+1,needle);
	}else
	{
		return instancecount(hay+1,needle);
	}
	
}

int main(int argc, char** argv)
{
	cout<<instancecount("ajay is a good day",'a');
	return 0;
}