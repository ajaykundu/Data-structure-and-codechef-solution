#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
     int testcases;
     cin>>testcases;

     while(testcases--)
     {
        string str[4];
        string str1[4];

        for(int i=0;i<4;i++)
        {
        	cin>>str[i];
        	
        }
        for(int i=0;i<4;i++)
        {
        	cin>>str1[i];
        	
        }
         
        int count=0;
        
        for(int i=0;i<4;i++)
        {
        	for(int j=0;j<4;j++)
        	{
        		//cout<<str[i]<<" "<<str1[j]<<endl;
        		if(str[i].compare(str1[j])==0)
        		{
                     
        			count++;
        			//cout<<count<<endl;
        		}
        	}
        }

        if(count>=2)
        {
        	cout<<"similar"<<endl;
        }
        else
        	cout<<"dissimilar"<<endl;

          

     }
	return 0;
}