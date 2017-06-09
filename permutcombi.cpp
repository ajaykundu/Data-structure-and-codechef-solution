    #include<bits/stdc++.h>
    #include<iostream>
	using namespace std;
     
   
    #define INF 1000000007
     
    long long f[100001];
     
    long long pow(long long a,long long b,long long MOD)
    {
     long long  x=1,y=a; 
     while(b > 0)
     	{
     		if(b%2 == 1)
     	{
     		x=(x*y);
     		if(x>MOD) x%=MOD;
     	}
     	y = (y*y);
     	if(y>MOD) y%=MOD; 
     	b /= 2;
     	}
     return x;
    }
    long long InverseEuler(long long n,long long MOD)
    {
     return pow(n,MOD-2,MOD);
    }
     
    long long C(long long n, long long r,long long MOD)
    {
     
     return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
    }
int main()
{  
	f[0] = 1;
    	for(int i = 1 ; i <= 100000; i++)
    		f[i] = (f[i-1]*i)%INF;
      int testcases;
      cin>>testcases;
      while(testcases--)
	  {
	  	int n;
	  	cin>>n;
	  	int looper=(n-2)/2+1;
	  	long long sum=0;
	  	for(int i=1;i<looper;i++)
		  {
		  	sum=sum+2*C(n-1,i,INF);
		  }
		  if(n%2==1)
		  	
		  {
		  	sum=sum+C(n-1,looper,INF);
		  }
		  sum=sum%INF;
		  cout<<sum<<endl;
	  }
}