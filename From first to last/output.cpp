#include<iostream>
using namespace std;
int main()
{  
    int i=624;
    printf("%u\n",&i);
    int *p=&i;
    printf("%u",*(p));
    
    
}
