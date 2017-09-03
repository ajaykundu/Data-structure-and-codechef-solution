#include <iostream>
#include <algorithm>
using namespace std;

long check_detri(long a,long b,long c)
{

	//cout<<a<<' '<<b<<' '<<c<<endl;
	if(a>=b && a>=c)
	{
		if(a<(b+c)){
			return 1;
		}
	}
	if(b>=a && b>=c)
	{
		if(b<(a+c)){
			return 1;
		}
	}
		if(c>=a && c>=b)
	{
		if(c<(a+b)){
			return 1;
		}
	}
	return 0;
}

int comp(const void* a, const void* b)
{  return *(int*)a > *(int*)b ; }


int main(int argc, char const *argv[])
{
	int n;
	int l,r;
	cin>>n>>l>>r;
   int counter=0;
   int arr[n];
   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }

      qsort(arr,n,sizeof( arr[0] ), comp);
 

	for(int i=l;i<=r;i++)
	{
		int j=0;
		while(arr[j]<i)
		{
			++j;
		}

        if(arr[j]==i)
        {
        	if(j!=0 && j!=r)
        	{
             if(check_detri(i,arr[j],arr[j+1]) || check_detri(i,arr[j],arr[j-1]))
             {
             	counter++;
                }
             }     
             else
             	if(j==0)
             	{
             		if(check_detri(i,arr[j],arr[j+1]))
             		{
             			counter++;
             		}
             	}
             	else if(j==r)
             	{
             		if(check_detri(i,arr[j],arr[j-1]))
             		{
             			counter++;
             		}
             	}
        }

        else
        {
        	if(j!=0 && j!=r && j!=1 && j!=r-1)
        	{
             if(check_detri(i,arr[j-1],arr[j-2]) || check_detri(i,arr[j],arr[j-1]) || check_detri(i,arr[j],arr[j+1]) )
             {
             	counter++;
                }
             }     
             else
             	if(j==0)
             	{
             		if(check_detri(i,arr[j],arr[j+1]))
             		{
             			counter++;
             		}
             	}
             	else if(j==r)
             	{
             		if(check_detri(i,arr[j],arr[j-1]))
             		{
             			counter++;
             		}
             	}
             	else
             		if (j==1)
             		{
             			if (check_detri(i,arr[j],arr[j-1]) || check_detri(i,arr[j],arr[j+1]))
             			{
             				counter++;
             			}
             		}
             		else if(j==r-1)
             		{
             			if(check_detri(i,arr[j],arr[j-1]) || check_detri(i,arr[j],arr[j+1]))
             			{
             				counter++;
             			}
             		}

        }

	}
	cout<<counter<<endl;
	return 0;
}