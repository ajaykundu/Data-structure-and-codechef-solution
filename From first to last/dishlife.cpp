#include <iostream>
using namespace std;

int arrcheck(int arr[],int size,int num)
{
	int flag=1;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int n,k;
		cin>>n>>k;
       int flag=0;
		int ingarr[k];
		int counter=0;
		int decider=0;
         int i=0;
		for(i=0;i<n;i++)
		{
			int p;
			cin>>p;
			for(int j=0;j<p;j++)
			{
				int num;
				cin>>num;
				if(!flag)
				{
                if(arrcheck(ingarr,counter,num))
                {
                	ingarr[counter]=num;
                	counter++;

                }
}
                if(counter==k)
                {

                	if(flag==0 && i==n-1)
                	{
                		decider=1;
                	}
                	flag=1;
                     
                }
			}

		}

		if(flag)
		{
			if(decider)
			{
				cout<<"all"<<endl;
			}
			else
			{
				cout<<"some"<<endl;
			}

		}
		else
		{
			cout<<"sad"<<endl;
		}
	}
	return 0;
}