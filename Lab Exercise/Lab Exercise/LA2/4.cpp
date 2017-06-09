#include <iostream>
using namespace std;
int main(){
	int ar[3][3];
	int sum=0,flag=0;
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

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i != j){
				if (ar[i][j]==ar[j][i]) {
					flag=1;
				}else {
					flag=0;
				}
			}
		}
	}
	if (flag==1) {
		cout<<"symetric";
	}
	return 0;
}