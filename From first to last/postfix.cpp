#include <stack>
#include <iostream>
#include <string>
using namespace std;
 
 int check_persistence(char a,char b)
 {
 	if(a=='*')
 	{
 		return 1;
 	}
 	return 0;
 }


int main(int argc, char const *argv[])
{
	string arr="a-b*c";
     stack<char>  s;
     char arr1[arr.size()];
     int it=0;


   for(int i=0;i<arr.size();i++)
   {
   	   if(arr[i]>=97 && arr[i]<=122)
   	   {
   	   	arr1[it];  it++;
   	   }
   	   else 
   	   {
   	   	
   	   }
   }

	
	return 0;
}