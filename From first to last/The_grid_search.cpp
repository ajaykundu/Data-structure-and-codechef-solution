#include<iostream>
#include<string>
using namespace std;

int comparestr(string str1,string str2)
{
	int x=str1.compare(str2);
	if(x==0)
		return 1;
	return 0;
}

int main(int argc, char const *argv[])
{
	int Testcases;
	cin>>Testcases;

	while(Testcases--)
	{
		int R_l;
		int C_l;
		cin>>R_l;
		cin>>C_l;
		string str1[R_l];
		for(int i=0;i<R_l;i++)
		{
			cin>>str1[i];
		}
		int r_s;
		int c_s;
		cin>>r_s;
		cin>>c_s;
		string str2[r_s];


		for(int i=0;i<r_s;i++)
		{
			cin>>str2[i];
		}
           int dicider=0;

          for(int i=0;i<=R_l - r_s;i++)
          {
          	for(int j=0;j<=C_l - c_s;j++)
          	{
          		if(str1[i][j]==str2[0][0])
          		{
          			int  counter=0;
          			for(int k=0;k<r_s;k++)
          			{
          				if(comparestr(str1[i+k].substr(j,c_s),str2[k]))
          				{
          					counter++;

          				}
          			}
          			//cout<<"Value of the counter is : "<<counter<<endl;
          		   if(counter==r_s)
          		   {
                       cout<<"YES"<<endl;
                       dicider=1;
                       break;
          		   }
          		}
          	}
          	if(dicider==1)
          	{
          		break;
          	}
          }

        if(dicider==0)
        	cout<<"NO"<<endl;
	}
	return 0;
}