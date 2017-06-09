#include <iostream>
using namespace std;

int main() 
{
	int ar[3][3];
	int i,j;
	int k, sp, max, pos,flag;

	for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			cout<<"enter the value of ar["<<i<<"]["<<j<<"]:"<<endl;
			cin>>ar[i][j];
		}
	}
	cout<<endl;
	for(i=0; i<3;i++){
		for(j=0; j<3;j++){
			cout<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		flag=1;
		sp=ar[i][0],pos=0;
		for(j=1;j<3;j++)
		{
			if(ar[i][j]<sp)
			{
				sp=ar[i][j];
				pos=j;
			}
		}
		for(k=0;k<3;k++)
		{
			if(ar[k][pos]>sp)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			cout<<"The saddle point in this matrix is "<<sp<<endl;
		}
	}
	return 0;
}