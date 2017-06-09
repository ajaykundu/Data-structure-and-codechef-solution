#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int c,d,l;
		cin>>c>>d>>l;

	    
	    
              l=l/4;
              if(l==0)
              {
              	cout<<"no"<<endl;
              }
              else
              	
              if(l>=d)
              {
                   int t=l-d;
                   int p=c-2*d;
                   if(p<=0)
                   {
                     cout<<"yes"<<endl;
                   }
                   else if(t<=p)
                   {
                   	cout<<"yes"<<endl;
                   }
                   else
                   {
                   	cout<<"no"<<endl;
                   }
              }
              else{
              	cout<<"no"<<endl;
              }
	    
	}
	return 0;
}