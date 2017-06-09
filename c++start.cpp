#include <iostream>
using namespace  std;

int main(int argc, char const *argv[])
{
	
	int **p=new int*[3];

	for(int i=0;i<3;i++)
	{
		p[i]=new int[2];
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<2;j++)
		{
			p[i][j]=i*3 +j;
		}
	}

   for(int i=0;i<3;i++)
   {
   	for(int j=0;j<2;j++)
{
	cout<<p[i][j]<<" ";
   }
   cout<<endl;
}

delete []p[0];
delete []p[1];
delete []p[2];

delete []p;


for(int i=0;i<3;i++)
   {
   	for(int j=0;j<2;j++)
{
	cout<<p[i][j]<<" ";
   }
   cout<<endl;
}

}
	
