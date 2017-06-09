#include <iostream>
using namespace std; 

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int n,k;
		cin>>n>>k;
        int arr[k];
     int counter=0;
     int flag=0;
        for(int i=0;i<k;i++)
        {
        	arr[i]=0;
        }

        // for(int i=0;i<k;i++)
        // {
        //       cout<<arr[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++)
        {
        	int p;
        	cin>>p;
        	for(int j=0;j<p;j++)
        	{
        		int num;
        		cin>>num;

        		if(arr[num-1]==0)
        		{
        			counter++;
        			arr[num-1]=1;
        			if(counter==k && i==n-1)
        			{
        				flag=1;
        			}
        		}
        		
        	}


        }
     //    cout<<counter<<endl;

     //    for(int i=0;i<k;i++)
     //    {
     //    	cout<<arr[i]<<" ";
     //    }
     // cout<<endl;
        if(counter==k)
        {
        	if(flag==1)
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