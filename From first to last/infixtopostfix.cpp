#include <iostream>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int priorityValue(char c)
{
	if(c=='^')
		return 12;
	if(c=='*' || c=='/')
		return 10;
	if(c=='+' ||  c=='-')
		return 8;
	if(c=='(')
		return 6;
}

int priority(char a,char b)
{
	if(priorityValue(a) > priorityValue(b))
		return 1;
    return 0;
 }


void convertTopostfix(char *arr)
{    


	char exp[30];
	int j=0;
   stack<char> s;
   s.push('(');

	for(int i=0;arr[i]!='\0';i++)
	{ 
		//cout<<arr[i]<<endl;
        if(arr[i]>=48 && arr[i]<=57)
        {
        	//cout<<"In the given condition:"<<arr[i]<<endl;
        	exp[j]=arr[i];
        	j++;
        	exp[j]='\0';
        }
        else if(arr[i]=='(')
        {
        	s.push('C');
        }
        else if(arr[i]==')')
        	 	 {   //cout<<"closing found"<<endl;
        	 	 	while(s.top()!='(' && !s.empty())
        	 	 	{  
                         // cout<<s.top()<<endl;
        	 	 		exp[j]=s.top();
        	 	 		j++;
        	 	 		exp[j]='\0';
        	 	 		s.pop();
        	 	 	}
        	 	 	
        	 	 }

        	 else

        	 if(priority(arr[i],s.top()))
        	 {
        	// 	cout<<"In the given condition of stack:"<<arr[i]<<endl;
                    s.push(arr[i]);
        	 }
        	 	 else {
                         if(priority(arr[i],s.top()))
                         { 
                         	//cout<<arr[i]<<endl;
                         s.push(arr[i]);
                         }
                         else
                         {
        	 	 	                while(!priority(arr[i],s.top()))
        	 	 	               {

        	 	 		exp[j]=s.top();
        	 	 	    	j++;
        	 	 	    	exp[j]='\0';
        	 	 	    	s.pop();
        	 	 	    }
        	 	 	    s.push(arr[i]);
        	 	 	    
             }
        	 	 	    
        	 	 }
        	 	//cout<<exp<<endl<<s.top()<<endl;
	}

	cout<<exp<<endl;


}

int main(int argc, char** argv)
{
     char arr[30]="1+2/3*5)";
    convertTopostfix(arr);
	return 0;
}