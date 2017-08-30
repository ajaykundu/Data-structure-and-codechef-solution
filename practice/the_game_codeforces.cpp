#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	double l, r, x, y, k;
	cin>>l>>r>>x>>y>>k;

     double flag=0;
     for(double i=l;i<=r;i++)
     {
     	for(double j=x;j<=y;j++)
     	{
               if((i/j)==k)
               {
               	flag=1;
               	break;
               }
               if(flag)
               	break;
     	}
     }

     if(flag)
     	cout<<"YES"<<endl;
     else 
     	cout<<"NO"<<endl;

	return 0;
}