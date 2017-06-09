#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	int size;
	cout<<"enter the size of the vector";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}

	cout<<v.size()<<endl;

	v.erase(v.begin()+3);

	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}