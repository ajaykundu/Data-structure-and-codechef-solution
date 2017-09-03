#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    int arr[i];
    int j,k,t;
    for(j=0;j<i;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(j=0;j<i;j++)
    {
        for(k=j+1;k<i;k++)
        {
            if(arr[j]>arr[k])
            {
                t=arr[j];
                arr[j]=arr[k];
                arr[k]=t;
            }
        }
    }
    
    for(j=0;j<i;j++)
    {
        printf("%d\n",arr[j]);
    }
    
    return 0;
}