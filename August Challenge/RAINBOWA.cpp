#include <iostream>
#include <stack>
using namespace std;

bool rainbow(int arr[],int n)
{
	stack<int> st;
	bool flag=1;
	int i=0;
    if(arr[0]!=1)
    {
    	return 0;
    }
	while(i<(n-1))
	{
       
		if(arr[i]>7)
         {
         	flag=0;
         	break;
         }
         else if(arr[i]==7)
         {
         	i++;
         	break;
         }
         else if(arr[i]==arr[i+1] || (arr[i]+1)==arr[i+1])
         {
         	st.push(arr[i]);
         //	cout<<arr[i]<<" ";
         	i++;
         }
         else {
         	    flag=0;
         	    break;
         }

	}
   //cout<<"becho"<<endl;

	while((i<n) && (flag))
	{    
         if(st.empty())
         {
            flag=0;
            break;
         }else 
		if(st.top()==arr[i])
		{
			st.pop();
			i++;
		}else {
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
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    	   cin>>arr[i];
    	}

    	if(rainbow(arr,n))
    		cout<<"yes"<<endl;
    	else cout<<"no"<<endl;
    }
	return 0;
}