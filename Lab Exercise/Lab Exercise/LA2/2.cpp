#include <iostream>
using namespace std;
int main(){
	int size = 3;
	int ar[3][3]; // = {{4,9,2},{3,5,7},{8,1,6}};
	int sum=0, sum1, sum2;
	int flag = 0;
	int i,j;

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
	//For diagonal elements
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i == j)
				sum = sum + ar[i][j];
		}
	}

	//For Rows
	for (i = 0; i < size; i++) {
		sum1 = 0;
		for (j = 0; j < size; j++) {
			sum1 = sum1 + ar[i][j];
		}
		if (sum == sum1)
			flag = 1;
		else {
			flag = 0;
			break;
		}
	}

	//For Columns
	for (i = 0; i < size; i++) {
		sum2 = 0;
		for (j = 0; j < size; j++) {
			sum2 = sum2 + ar[j][i];
		}
		if (sum == sum2)
			flag = 1;
		else {
			flag = 0;
			break;
		}
	}

	if (flag == 1)
		{cout<<"\nMagic square";}
	else
		{cout<<"\nNot a Magic square";}
	return 0;
}