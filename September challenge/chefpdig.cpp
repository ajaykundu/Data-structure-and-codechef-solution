#include <iostream>
#include <string>
#include <vector>
using namespace std;

void chefdping(int n,std::vector<int> arr)
{
	int val[26]={0};
	int count=0;

	for(int i=0;i<n;i++)
	{  
		for(int j=i+1;j<n;j++)
		{
			int a=arr[i]*10 + arr[j];
			int b=arr[j]*10 + arr[i];
          // cout<<a<<" "<<b<<endl;
			if((a>=65 && a<=90))
			{ // cout<<"fhfoisjfs ";
                  if(val[a-65]==0)
                  {
                  	val[a-65]=1;
                  	count++;
                  }
			}

			if(b>=65 && b<=90)
			{
				if(val[b-65]==0)
				{ //cout<<"dhflsfhlshlif"<<endl;
					val[b-65]=1;
					count++;
				}
			}

			if(count==27)
				break;
		}
		if(count==27)
			break;
	}

	for(int i=0;i<26;i++)
	{
		if(val[i]==1)
		{
			cout<<(char)(i+65);
		}
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
       string str;
       cin>>str;
     //  cout<<"hello"<<endl;
       int arr[10]={0};
       for(int i=0;i<str.length();i++)
       {
          arr[str[i]-48]++;
       }
       std::vector<int> v;
       for(int i=0;i<6;i++)
       {
           if(arr[i]!=0)
           {
                v.push_back(i);
           }
       }

       for(int i=6;i<9;i++)
       {
            if(arr[i]!=0)
            {
            	v.push_back(i);
            	arr[i]--;
            	if(arr[i]!=0)
            	{
            	   v.push_back(i);
            	}
            }
       }
       if(arr[9]!=0)
       {
       	v.push_back(9);
       }
       chefdping(v.size(),v);
	}
	return 0;
}