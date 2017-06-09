#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{	
		int u,v;
		cin>>u>>v;

		int ans=0;
           int incrementer=0;
           int decider=0;
		while(true)
		{
             
            int t=incrementer;
            for(int p=0;t>=0;p++)
            {   ans++;
            	if(p==u && t==v)
            	{   
            		decider=1;

            		break;
            	}
            	t--;

            }
           // cout<<incrementer<<endl;
               
            if(decider==1)
            {
            	break;
            }
               incrementer++;
		}

		cout<<ans<<endl;
	}
	return 0;
}