#include <iostream>
#include <string>
using namespace std;



int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{ 
           string s;
           cin>>s;

           if(s[0]=='m')
           {
           	    if(s.length()==1)
           	    {
           	    	//donothing.
           	    }
           	    else{
           	    	if(s[1]=='s')
           	    	{
           	    		s[1]='0';
           	    	}
           	    }
           }


      for(int i=1;i<(s.length()-1);i++)
      {
      	    if(s[i]=='m'){
      	    	if(s[i-1]=='s')
      	    	{
      	    		s[i-1]='0';
      	    	}
      	    	else if(s[i+1]=='s')
      	    	{
      	    		s[i+1]='0';
      	    	}
      	    	else{
      	    		//do nothing.
      	    	}
      	    }
      }

      if(s[s.length() -1]=='m')
      {
      	if(s[s.length()-2]=='s')
      	{
      		s[s.length()-2]='0';
      	}
      }

      int snakecounter=0;
      int monguoosecounter=0;
      //cout<<s<<endl;
    //cout<<s.length()-1;
      for(int i=0;i<(s.length());i++)
      {
      	if(s[i]=='m')
      	{
      		monguoosecounter++;
      	}
      	else if(s[i]=='s')
      	{
      		snakecounter++;
      	}
      	else
      	{
      		//do nothing.
      	}
      }
      // cout<<"mon: "<<monguoosecounter<<"snake: "<<snakecounter<<endl;
       if(snakecounter==monguoosecounter)
       {
       	  cout<<"tie"<<endl;
       }
       else if(snakecounter > monguoosecounter)
       {
       	cout<<"snakes"<<endl;
       }
       else {
       	cout<<"mongooses"<<endl;
       }

	}
	return 0;
}