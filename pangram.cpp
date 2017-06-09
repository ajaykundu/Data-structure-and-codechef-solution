#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;

      getline(cin,str);
       int arr[26];
    
    for(int i=0;i<str.size();i++)
    {
            if(str[i]>='A' && str[i]<='Z')
            {
            	int x=str[i]-'A';
            	
            	arr[x]=1;
            }else if(str[i]>='a' && str[i]<='z')
            {
            	int x=str[i]-'a';
               
            	arr[x]=1;
            }
            else
            {

            }
    }

    int counter=0;
    for(int i=0;i<26;i++)
  {
  	if(arr[i]==1)
  	{
  		counter++;
  		
  	}
  }

   if(counter==26)
   {
   	cout<<"pangram"<<endl;
   }
    else
    {
    	cout<<"not pangram"<<endl;
    }
	return 0;
}