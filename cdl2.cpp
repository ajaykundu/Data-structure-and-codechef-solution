#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int c,d,l;
		cin>>c>>d>>l;

		if(l>=d*4)
		{
             int left_legs=d*4-l;
             int left_cats_after_sitting_on_dog=c-2*d;
             if(left_cats_after_sitting_on_dog<=0)
             {
             	cout<<"yes"<<endl;
             }
             else if(left_legs >= left_cats_after_sitting_on_dog*4 )
             {
             	cout<<"yes"<<endl;
             }
             else
             {
             	cout<<"no"<<endl;
             }
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}