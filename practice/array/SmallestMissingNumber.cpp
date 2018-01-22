#include <stdio.h>
#include <iostream>
using namespace std;
#include <stdlib.h>
 
/* The output of this function is stored at
   *x and *y */
void getTwoElements(int arr[], int n, int *x, int *y)
{
    /* Will hold xor of all elements and numbers 
       from 1 to n */
       cout<<n<<endl;
    int xor1; 
   
    /* Will have only single set bit of xor1 */
    int set_bit_no; 
     
    int i;
    *x = 0;
    *y = 0;
 
    xor1 = arr[0];
     cout<<xor1<<endl;
    /* Get the xor of all array elements */
    for(i = 1; i < n; i++)
        xor1 = xor1 ^ arr[i];
     cout<<xor1<<endl;
    /* XOR the previous result with numbers 
       from 1 to n*/
    for(i = 1; i <= n; i++)
        xor1 = xor1 ^ i;
     cout<<xor1<<endl;
    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = xor1 & ~(xor1-1);
     
    /* Now divide elements in two sets by comparing 
    rightmost set bit of xor1 with bit at same 
    position in each element. Also, get XORs of two 
    sets. The two XORs are the output elements. The
    following two for loops serve the purpose */
    cout<<set_bit_no<<endl;
    for(i = 0; i < n; i++)
    {
        if(arr[i] & set_bit_no)
        /* arr[i] belongs to first set */
        *x = *x ^ arr[i]; 
         
        else
        /* arr[i] belongs to second set*/
        *y = *y ^ arr[i]; 
    }
    for(i = 1; i <= n; i++)
    {
        if(i & set_bit_no)
        /* i belongs to first set */
        *x = *x ^ i; 
         
        else
        /* i belongs to second set*/
        *y = *y ^ i;
    }
 
/* *x and *y hold the desired output elements */
}
 
/* Driver program to test above function */
int main()
{
int arr[] = {1, 3, 4, 5, 5, 6};
int *x = (int *)malloc(sizeof(int));
int *y = (int *)malloc(sizeof(int));
int n = sizeof(arr)/sizeof(arr[0]);
 
getTwoElements(arr, n, x, y);
 
printf(" The missing element is %d and the repeating number is %d", *x, *y);
getchar();
}