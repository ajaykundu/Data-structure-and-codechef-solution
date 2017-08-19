#include <iostream>
#include<bits/stdc++.h>
#include <utility>
using namespace std;

int rodcut(int price[],int length)
{
	int dp[length+1];
	dp[0]=0;
	for(int i=1;i<=length;i++)
	{
		int max=INT_MIN;
		for(int j=0;j<i;j++)
		{
			if(dp[j]+price[i-j-1] > max)
			{
				max=dp[j]+price[i-j-1];
			}
		}
		dp[i]=max;
	}
	return dp[length];
}

int main(int argc, char const *argv[])
{
	int price[]={3, 5, 8, 9, 10, 17, 17, 20};
    int length=8;
    cout<<rodcut(price,length);
	return 0;
}