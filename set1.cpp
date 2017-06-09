#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	set<int> s;
	//s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(5);

	cout<<   *(s.rbegin())<<endl;
	return 0;
}