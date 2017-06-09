#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	return gcd(b,a%b);
}


int main(){
         int arr[5]={5,12,15,20,25};


	int result = arr[0];
for(int i = 1; i < 5; i++){
    result = gcd(result, arr[i]);
}
cout<< result;
}