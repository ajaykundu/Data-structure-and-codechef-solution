#include <iostream>
#include <string>
#include <stdio.h>
#include<cstdlib>
#include <ctype.h>
#include <string.h>
using namespace std;

void stringProcessing(string str)
{
    int spaceConter=0;
    int i=0;
    while(str[i]!='\0')
    {
    	if(str[i]==' ')
    	{
    		spaceConter++;
    	}
    	i++;
    }

    if(spaceConter==0)
    {
    	str[0]=toupper(str[0]); cout<<str[0];
    	int j=1;
    	while(str[j]!='\0'){
             str[j]=tolower(str[j]);
             cout<<str[j];
             j++;
    	}
    	
    }
    else if(spaceConter==1){
           
           str[0]=toupper(str[0]);
           cout<<str[0]<<". ";
           int j=1;
           while(str[j]!=' ')
           {
           	   j++;
           }
         j++;
         str[j]=toupper(str[j]);
         cout<<str[j];
         j++;
         while(str[j]!='\0')
         {  str[j]=tolower(str[j]);
         	cout<<str[j];
         	j++;
         }
    }
    else {
    	    str[0]=toupper(str[0]);
           cout<<str[0]<<". ";
           int j=1;
           while(str[j]!=' ')
           {
           	   j++;
           }
         j++;
         str[j]=toupper(str[j]);
         cout<<str[j]<<". ";
          while(str[j]!=' ')
           {
           	   j++;
           }
           j++;
           str[j]=toupper(str[j]);
           cout<<str[j]; j++;
         while(str[j]!='\0')
         {  
         	str[j]=tolower(str[j]);
         	cout<<str[j];
         	j++;
         }
    }

}

int main(int argc, char const *argv[])
{
	string str;
	int t ;
	cin>>t;
	while (t--)
	{
		getline(cin, str);

		// Keep reading a new line while there is
		// a blank line
		while (str.length()==0 )
			getline(cin, str);

		stringProcessing(str);
		cout<<endl;
	}
	return 0;
}