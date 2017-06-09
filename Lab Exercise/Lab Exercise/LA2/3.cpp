#include <iostream>
using namespace std;
int main(){
	int ar[3][3];
	int sum=0;
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
	//sum of diagonal elements
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j)
				sum = sum + ar[i][j];
		}
	}
	cout<<"trace of the matrix is :"<<sum;
	return 0;
}