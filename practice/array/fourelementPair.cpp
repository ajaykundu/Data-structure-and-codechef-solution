#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

struct pairSum
{
	int first; 
	int sec;
	int sum;
};

int compare (const void *a, const void * b)
{
    return ( (*(pairSum *)a).sum - (*(pairSum*)b).sum );
}

bool noCommon(struct pairSum a,struct pairSum b)
{
	if (a.first == b.first || a.first == b.sec ||
            a.sec == b.first || a.sec == b.sec)
        return false;
    return true;
}

void fourelement(int arr[],int n,int X)
{
	int i,j;
	int size = (n*(n-1))/2;
	struct pairSum aux[size];
	
	int k=0;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			aux[k].sum = arr[i] + arr[j];
            aux[k].first = i;
            aux[k].sec = j;
            k++;
		}
	}
	qsort(aux,size,sizeof(aux[0]),compare);
	
	i=0;
	j=size-1;
	while(i<size && j>=0)
	{
		if ((aux[i].sum + aux[j].sum == X) && noCommon(aux[i], aux[j]))
        {
            printf ("%d, %d, %d, %d\n", arr[aux[i].first], arr[aux[i].sec],
                                     arr[aux[j].first], arr[aux[j].sec]);
        }
        else if (aux[i].sum + aux[j].sum < X)
            i++;
        else
            j--;
	}
}

int main(int argc, char** argv)
{
    int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n,sum;
		cin>>n>>sum;
		
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		fourelement(arr,n,sum);
	}
		   	
	return 0;
}