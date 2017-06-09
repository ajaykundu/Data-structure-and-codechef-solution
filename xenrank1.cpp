#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		long long u,v;
		cin>>u>>v;

		cout<<(((u+v+1)*(u+v))/2)+(u+1)<<endl;

	}
	return 0;
}