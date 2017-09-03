#include <iostream>
#include <stdio.h>
using namespace std; 

int maxof(int a,int b)
{
	return a>b?a:b;
}

int rodcutting(int length,int price[])
{
	int dp[length+1];
	dp[0]=0;
	for(int i=1;i<=length;i++)
	{
		int max=-1;
		for(int j=0;j<i;j++)
		{
			max=maxof(max,dp[j]+price[i-j-1]);
		}
		dp[i]=max;
	}
	return dp[length];
}

int main(int argc, char const *argv[])
{    int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum Obtainable Value is %d", rodcutting(size, arr));
   
    return 0;
}