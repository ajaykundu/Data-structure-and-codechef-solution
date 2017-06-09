#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

// int modulo1(int modulo,int a,int n,int m,int num)
// {   
//    cout<<"calling"<<endl;
//  long Bignum;
// 	if(n==0)
// 	{
// 		return modulo;
// 	}

// 	Bignum=modulo*pow(10,num)+a;
    
//     return modulo1(Bignum % m,a,n-1,m,num);

// }

int main(int argc, char const *argv[])
{
	//std::vector<int> v;
	
  int testcases;
  cin>>testcases;
  while(testcases--)
  {
	int a,n,m;
    cin>>a>>n>>m;
    int counter=0;
  int temp=a;
    while(temp!=0)
    {    temp=temp/10;
    	counter++;
    }
  //  cout<<counter<<endl;

    int modulo=0;

    for(int i=0;i<n;i++)
    {
    	int Bignum=modulo*pow(10,counter)+a;

    	modulo=Bignum%m;

    }

  //cout<<modulo1(0,a,n,m,counter)<<endl;
       cout<<modulo<<endl;

}
	return 0;
}