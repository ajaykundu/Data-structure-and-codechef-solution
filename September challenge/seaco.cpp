#include <iostream>
#include <vector>
using namespace std;

void command1(int ansArr[],int l,int r,vector<int> v[],int i)
{
     v[i][3]++;
}

void command2(int ansArr[],vector<int> v[],int l,int r)
{
	for(int i=l-1;i<r;i++)
	{
       if(v[i][0]==1)
       {
       	   command1(ansArr,v[i][1],v[i][2],v,i);
       }
       else {
       	   command2(ansArr,v,v[i][1],v[i][2]);
       }
	}
}

void seaco(int n,int ansArr[],vector<int> v[],int q)
{
	
	for(int i=0;i<q;i++)
	{
		if(v[i][0]==1)
		{
			command1(ansArr,v[i][1],v[i][2],v,i);
		}
		else {
			command2(ansArr,v,v[i][1],v[i][2]);
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
		std::vector<int> v[q];
		int ansArr[n]={0};
		for(int i=0;i<q;i++)
		{
            int c,l,r; 
            cin>>c>>l>>r;
            v[i].push_back(c);
            v[i].push_back(l);
            v[i].push_back(r);
            v[i].push_back(0);
		}
		seaco(n,ansArr,v,q);
        
        for(int i=0;i<q;i++)
        {
        	if(v[i][0]==1)
        	{
        		for(int j=v[i][1]-1;j<v[i][2];j++)
        		{
                      ansArr[j]+=v[i][3];
        		}
        	}
        }

		for(int i=0;i<n;i++)
		{
			cout<<ansArr[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}