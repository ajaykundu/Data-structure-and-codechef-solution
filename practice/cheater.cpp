#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	int count[1000]={0};
	while(testcases--){
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int tu; cin>>tu;
			count[tu-1]++;
		}
		for(int i=0;i<1000;i++)
		{
			if(count[i]==1)
			{
				cout<<i+1<<endl;
			}
		}
	}
	return 0;
}