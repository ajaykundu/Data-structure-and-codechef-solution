#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int n;cin>>n;
		string s1,s2;cin>>s1>>s2;

		if(n==1)
    	{
    		if(s1[0]=='*' && s2[0]=='*')
    		{
    			cout<<1<<endl;
    		}else {
    			cout<<0<<endl;
    		}
    	}
    	else
    	{
    		  int counter=0;
                 int fd=0;
                 int sd=0;
    		  for(int i=0;i<n;i++)
    		  {
                     if(s1[i]=='*')
                     {
                     	fd=1;
                     }
                     if(s2[i]=='*')
                     {
                     	sd=1;
                     }
    		  }

    		  if(fd==1 && sd==1)
    		  {
    		  	 counter++;
    		  }

    		  int decidingcounter1=0;
    		  int decidingcounter2=0;

    		  for(int i=0;i<n;i++)
    		  {
    		  	   if(s1[i]=='*')
    		  	   {
    		  	   	decidingcounter1++;
    		  	   }
    		  	   if(s2[i]=='*')
    		  	   {
    		  	   	decidingcounter2++;
    		  	   }
      //  cout<<"intial situation: "<<decidingcounter1<<" "<<decidingcounter2<<endl;
    		  	   if(decidingcounter2==2 && decidingcounter1==2)
    		  	   {
    		  	   	   counter++;
    		  	   	   decidingcounter1=1;
    		  	   	   decidingcounter2=1;
    		  	   }
    		  	   else if(decidingcounter1==2)
    		  	   {
    		  	   	  counter++;
    		  	   	  decidingcounter1=1;
    		  	   	  decidingcounter2=0;
    		  	   }else if(decidingcounter2==2)
    		  	   {
    		  	   	   counter++;
    		  	   	   decidingcounter1=0;
    		  	   	   decidingcounter2=1;
    		  	   }
              
    		  //	   cout<<"decing "<<decidingcounter1<<" "<<decidingcounter2<<endl;
    		  }


    		  cout<<counter<<endl;
    	}

	}
	return 0;
}