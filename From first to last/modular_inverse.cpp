#include <iostream>
using namespace std;


int modInverse(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
      return 0;
}



int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}
int main()
{
    int a = 98, m = 112;
      //int c=70%27;
    cout << modInverse(998, 1000000007);
    return 0;
}