#include <iostream>
#include <vector>
using namespace std;

void increment(vector<long long> v[],int l,int r,int curr)
{
	for(int i=l-1;i<r;i++)
	{
		v[i][3] = v[i][3] + 1 + v[curr][3];
		v[i][3]=v[i][3]%1000000007;
	}
}

void seaco(vector<long long> v[],int q)
{
	for(int i=q-1;i>=0;i--)
	{
         if(v[i][0]==1)
         {
         	v[i][3]++;
         	
         }
         else {
         	increment(v,v[i][1],v[i][2],i);
         }
	}
}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n,q;
		cin>>n>>q;
		vector<long long> v[q];
		long long arr[n]={0};
		for(int i=0;i<q;i++)
		{
			int m,l,r;
			cin>>m>>l>>r;
            v[i].push_back(m);
            v[i].push_back(l);
            v[i].push_back(r);
            v[i].push_back(0);
		}

		seaco(v,q);
		for(int i=0;i<q;i++)
		{
            if(v[i][0]==1)
            {
            	for(int j=v[i][1]-1;j<v[i][2];j++)
            	{
            		arr[j]=arr[j]+v[i][3];
            	}
            }
		}
		for(int i=0;i<n;i++)
		{
             cout<<(arr[i])%1000000007<<" ";
		}
		cout<<endl;
	}
	return 0;
}