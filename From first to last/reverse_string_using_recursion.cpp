#include <iostream>
using namespace std;
void reverse(char* str,int len){
	if(len<2)
		return;
      
	reverse(str,len-1);
	char temp=str[len-1];
      for(int i=len-1;i>0;i--)
	  {
	  	str[i]=str[i-1];
	  }
	  str[0]=temp;
}

int main(int argc, char** argv)
{
	reverse("aj",2);
	return 0;
}