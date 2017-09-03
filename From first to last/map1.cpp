// map::rbegin/rend
#include <iostream>
#include <map>

int main ()
{
  std::map<int,int> mymap;

  mymap[1] = 300;
  mymap[3] = 200;
  mymap[2] = 250;

  // show content:
  std::map<int,int>::reverse_iterator rit;
  for (rit=mymap.rbegin(); rit!=mymap.rend(); ++rit)
    std::cout << rit->first << " => " << rit->second << '\n';

  return 0;
}