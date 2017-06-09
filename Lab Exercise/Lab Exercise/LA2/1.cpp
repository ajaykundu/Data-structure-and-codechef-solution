#include <iostream>
using namespace std;
int main()
{
    int i,j,ar[3][3],ut=1,lt=1;
    
    for(i=0; i<3;i++){
        for(j=0; j<3;j++){
            cout<<"enter the value of ar["<<i<<"]["<<j<<"]:"<<endl;
            cin>>ar[i][j];
        }
    }
    
    for(i=0; i<3;i++){
        for(j=0; j<3;j++){
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for (i=0;i<3;i++){
        for (j = 0; j < 3; j++){
            if (j<i && ar[i][j] != 0){
                ut=0;
            }
        }
    }
    for (i=0;i<3;i++){
        for (j = 0; j <3; j++){
            if (i<j && ar[i][j] != 0){
                lt=0;
            }
        }
    }
    if(ut==1 && lt==1){
        cout<<"it is a diagonal matrix\n";
    }
    else if(ut==1){
        cout<<"it is an upper triangular matrix\n";
    }
    else if(lt==1){
        cout<<"it is an Lower triangular matrix\n";
    }
    else if (ut==0 && lt==0) {
        cout<<"it is a simple matrix\n";
    }
    return 0;
}