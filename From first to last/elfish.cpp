#include <iostream>
using namespace std;

int elfish(char *hay,int maskneedle)
{
	if(maskneedle==7)
	{
		return 1;
	}
	if(hay[0]=='\0')
	{
		return 0;
	}
	
	if(hay[0]=='e')
	{   //if element is e;
		maskneedle=maskneedle | 4;
		
	}else if(hay[0]=='l')
	{   // element is l;
		maskneedle=maskneedle |2;
		
	}else if(hay[0]=='f')
	{
		//element is f.
		maskneedle=maskneedle|1;
		
	}
	
	
	
	  return elfish(hay+1,maskneedle);
	
	
}

int main(int argc, char** argv)
{
	cout<<elfish("ajayelfkundu",0);
	return 0;
}