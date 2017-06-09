#include<iostream>
using namespace std;
int main(int argc, char** argv)
{
	
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		
	
	int n;
	cin>>n;
	int p=1000000007;
	unsigned long long r;
	unsigned long long u = 1, w = 2;
   n=n-1;
   
while (n != 0)
{
    if ((n & 0x1) != 0)
        u = (u * w) % p; /* (mul-rdx) */

    if ((n >>= 1) != 0)
        w = (w * w) % p; /* (sqr-rdx) */
}

r = (unsigned long) u;
if(r==0)
{
	r=p-2;
}
else
	r=r-2;
cout<<r<<endl;
	}
	return 0;
}