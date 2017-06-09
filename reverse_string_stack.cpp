#include <iostream>
#include <stack>
using namespace std;

void rever(stack<char> s)
{
}
int main(int argc, char const *argv[])
{
	stack<char> s;

	s.push('a');
		s.push('b');
			s.push('c');
			rever(s);

	return 0;
}