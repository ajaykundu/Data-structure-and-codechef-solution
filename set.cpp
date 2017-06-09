#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
	set<int> s;
	s.insert(12);
    s.insert(19);
    s.insert(6);
	set<int>::reverse_iterator it;
  
  for(it=s.rbegin();it!=s.rend();it++)
  {
  	  cout<<*it<<endl;
  }

	return 0;
}