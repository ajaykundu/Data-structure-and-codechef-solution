#include <iostream>
#include <math.h>
using namespace std;

long long  power(long long x, long long y,long long p)
{
    long long  res = 1;      
 
    x = x % p;  
 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
        
        y = y>>1; 
        x = (x*x) % p;  
    }
    return res;
}


long long modInverse(long long a, long long m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
   
}



int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		long long N;
		long long repition;
		long long modulo;
		cin>>N>>repition>>modulo;

        long long num_digit=0;
      long long temp=N;

      while(temp>0)
      {
      	num_digit++;
       temp=temp/10;
      }
          
          long long A=N%modulo;

          long long B=power(10,num_digit*repition,modulo);
          long long C=(B-1+modulo);
          long long D=C%modulo;

         long long E=modInverse(pow(10,num_digit)-1,modulo);

         long long ans=(A*D*E)%modulo;

         cout<<ans<<endl;

	}
	return 0;
}
 