#include<iostream>
using namespace std;

int main()
{
   int testcases;
   cin>>testcases;
   while(testcases--)
   {
      int n;
      cin>>n;
      long long ans = n;
      while(n!=0)
      {
          ans = ans * (n%10);
          n = n/10;
      }
      cout<<ans<<endl;
   }
}