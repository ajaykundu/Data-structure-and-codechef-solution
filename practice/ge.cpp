#include<iostream>
using namespace std;

int power(long long sec,int num,int mod)
{
	cout<<num<<endl;
	if(num==1)
	{
		return sec;
	}
	long long temp=power(sec,num/2,mod);
	if(num%2==0)
		temp=((temp%mod)*(temp%mod))%mod;
	else temp=((temp%mod)*(temp%mod)*(sec%mod))%mod;
	return temp;
}


int main(int argc, char const *argv[])
{
	int s,n,m;
     cin>>s>>n>>m;
    //cout<< power(s,n,m);
     int val=power(s,n,10);
     cout<<val<<endl;
    cout<<power(val,m,1000000007)% 1000000007;
	return 0;
}