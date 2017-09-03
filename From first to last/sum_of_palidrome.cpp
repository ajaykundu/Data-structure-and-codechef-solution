#include <iostream>
using namespace std;

int checkpalidrome(int num)
{
	int comp=num;
	int rev=0;

	while(num>0)
	{
		int r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	if(rev==comp)
	{
		return 1;
	}
	else
		return 0;
}

int main(int argc, char const *argv[])
{
	
   int testcases;
   cin>>testcases;
   while(testcases--)
   {
   long long l,r;
   cin>>l>>r;

   long long sum=0;

   for(int i=l;i<=r;i++)
   {
   int l=checkpalidrome(i);
   if(l==1)
   {
   	sum=sum+i;
   }else{}


   }
   cout<<sum<<endl;
 

   }
}