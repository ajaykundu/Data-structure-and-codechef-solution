#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<string>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string one;cin>>one;
    string two;cin>>two;
    string three;cin>>three;
    
    string finalstr;
    finalstr=one+two+three;
    int decider=1;
    
    string comparestr="CODERUNNER";
    int count=0;

    for(int i=0;comparestr[i]!='\0';i++)
    {     int tu=0;
    	for(int j=0;finalstr[j]!='\0';j++)
    	{     
    		
    		if(comparestr[i]==finalstr[j])
    		{
    		   tu++;
    		}
    	}
       if(comparestr[i]=='E' || comparestr[i]=='N' || comparestr[i]=='R')
    		{
                    if(tu>1)
                    {
                    	count++;
                    }
    		}
    		else if(tu>0)
    		{
    			count++;
    		}

    }
   

    if(count==10)
    	cout<<"YES"<<endl;

else
	cout<<"NO"<<endl;
    return 0;
}