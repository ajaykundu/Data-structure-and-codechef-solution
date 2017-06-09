#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	map<int,int> map1;

	for(int i=0;i<5;i++)
	{   int a;
		cin>>a;
        map1.insert(pair<int,int>(a,i));
	}

   std::map<int,int>::reverse_iterator rit;
  for (rit=map1.rbegin(); rit!=map1.rend(); ++rit)
    std::cout << rit->first << " => " << rit->second << '\n';
	return 0;
}