#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int z=0;z<n;z++)
		{
			cin>>arr[z];
		}
		
		int first,second;
		first=arr[0]; 
		second=arr[1];
			int divider=2;
	int lcm=1;
	int t;
	if(first>second)
	t=first;
    else
	{
		t=second;
	}
	while(divider<=t)
	{
		if(first%divider==0 || second%divider==0)
		{
			lcm=lcm*divider;
			if(first%divider==0)
			{
				first=first/divider;
			}
			if(second%divider==0)
			{
				second=second/divider;
			}
		}
		else
		{
			divider++;
		}
	}
	int lcmnew=1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			first=arr[i];
			second=arr[j];
			lcmnew=1;
			divider=2;
			if(first>second)
	t=first;
    else
	{
		t=second;
	}
	while(divider<=t)
	{
		if(first%divider==0 || second%divider==0)
		{
			lcmnew=lcmnew*divider;
			if(first%divider==0)
			{
				first=first/divider;
			}
			if(second%divider==0)
			{
				second=second/divider;
			}
		}
		else
		{
			divider++;
		}
	}
		if(lcmnew<=lcm)
		{
			lcm=lcmnew;
		}	
			
		}
	}
	
	
	
	cout<<lcm<<endl;
	}
	return 0;
}