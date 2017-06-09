#include <iostream>
#include <string>
using namespace std;


int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
    {
    	int n;
    	cin>>n;
    	string s1;
    	cin>>s1;
    	string s2;  cin>>s2;

    	

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
    		  int arr[n-1];

    		  for(int i=0;i<n-1;i++)
    		  {
    		  	arr[i]=0;
    		  }

    		  for(int i=0;i<n;i++)
    		  {
    		  	    if(i==0)
    		  	    {
    		  	    	if(s1[i]=='*')
    		  	    	{
    		  	    		if(s2[i]=='*' || s2[i+1]=='*')
    		  	    		{
    		  	    			counter++;
    		  	    			break;
    		  	    		}

    		  	    	}
    		  	    }else if(i==n-1)
    		  	    {
    		  	    	if(s1[i]=='*')
    		  	    	{
    		  	    		if(s2[i]=='*' || s2[i-1]=='*')
    		  	    		{
    		  	    			counter++;
    		  	    			break;
    		  	    		}
    		  	    	}
    		  	    }
    		  	    else {
    		  	    	if(s1[i]=='*')
    		  	    	{
    		  	    		if(s2[i]=='*' || s2[i-1]=='*' || s2[i+1]=='*')
    		  	    		{
    		  	    			counter++;
    		  	    			break;
    		  	    		}
    		  	    	}
    		  	    }

    		  }

    		  for(int i=0;i<n-1;i++)
    		  {
    		  	  if(s1[i]=='*' && s1[i+1]=='*')
    		  	  {
                     counter++;
                     arr[i]=1;
    		  	  }
    		  }

    		  for(int i=0;i<n-1;i++)
    		  {
    		  	if(s2[i]=='*' && s2[i+1]=='*' && arr[i]==0)
    		  	{
    		  		counter++;
    		  	}
    		  }

    		  cout<<counter<<endl;
    	}


    }
	return 0;
}