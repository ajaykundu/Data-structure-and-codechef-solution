#include <iostream>
#include <string>
using namespace std;

int check(string s,int numone)
{
	//cout<<"check"<<endl;
	//cout<<s<<endl;
	int counter=0;
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]=='1')
		{
			counter++;
		}
		else
		{
			break;
		}
	}

	if(counter==numone)
	{
		return 1;
	}
	else 
	{
		return 0;
	}

}

int main(int argc, char const *argv[])
{
    
   //cout<<"hello"<<endl;

	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		string s;
		cin>>s;
		//cout<<s;
		int stlen=s.length();
		//cout<<stlen<<endl;
		int numone=0;
		for(int i=0;i<stlen;i++)
		{
			if(s[i]=='1')
			{
				numone++;
			}
		}
           int ans=0;
		while(true)
		{
		//	cout<<"helloFirst"<<endl;
              int i=0;
              while(i<stlen-1)
              {
              	//cout<<"helloSecond"<<i<<endl;
              	//cout<<s<<endl;
                    if(s[i]=='1')
                         {

                             if(s[i+1]=='0')
                             {
                             	ans++;
                             }

                             while(s[i+1]=='0' && i<stlen-1)
                             {   
                             	//cout<<"hello3"<<endl;
                             	s[i]='0';
                             	s[i+1]='1';
                             	ans++;
                             	i++;
                             }
                             i++;

                          }
                          else

                          {
                              i++;
                          }
              }
          //   cout<<s<<endl;
              if(check(s,numone))
              {

              	break;
              }
		}

		cout<<ans<<endl;


	}
	
	return 0;
}