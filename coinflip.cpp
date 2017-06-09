#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
	int testcase;
	cin>>testcase;
	while(testcase>0)
	{
		int g;
		cin>>g;
		while(g>0)
		{
			int l,n,q;
			cin>>l>>n>>q;
			if(l==1)
			{
				if(q==1)
				{
					cout<<n/2<<endl;
				}
				else{
					if(n%2==0)
						cout<<n/2<<endl;
					else
					{
						cout<<n/2+1<<endl;
					}
				}
			}
			else
			{
				if(q==2){
					cout<<n/2<<endl;
				}
				else
				{
					if(n%2==0)
					{
						cout<<n/2<<endl;
					}else
					{
						cout<<n/2+1<<endl;
					}
				}
			}
			g--;
		}
		testcase--;
	}
	return 0;
}