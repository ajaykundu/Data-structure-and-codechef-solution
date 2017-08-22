#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a<b?a:b;
}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		float num;
		cin>>num;
		float a,b;
		cin>>a>>b;

       float decision=(360/num)*(abs(a-b));
     cout<<decision<<endl;
        if(decision < 180)
        {
        	cout<<abs(a-b)-1<<endl;
        }
        else if(decision == 180)
        {
        	cout<<0<<endl;
        }
        else {
        	cout<<abs(num-max(a,b)) + abs(min(a,b)-1)<<endl;
        }
   
	}
	return 0;
}