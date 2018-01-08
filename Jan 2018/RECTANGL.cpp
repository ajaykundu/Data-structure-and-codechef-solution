#include <iostream>
#include <vector>
using namespace std;

bool reactangle(int a[])
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
          if(a[i]==a[j])
		  {
		  	a[i]=0;
		  	a[j]=0;
		  	break;
		  }
		}
	}
	for(int i=0;i<4;i++)
	{
		if(a[i]!=0)
			return 0;
	}
	return 1;
}

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	int a[4];
	while(testcases--)
	{
       cin>>a[0]>>a[1]>>a[2]>>a[3];
	   if(reactangle(a))
	   {
	   	cout<<"YES"<<endl;
	   }
	   else cout<<"NO"<<endl;
	   	}
	
	return 0;
}