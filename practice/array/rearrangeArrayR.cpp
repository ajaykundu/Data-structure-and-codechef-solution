#include <iostream>
#include <vector>
using namespace std;

int rearrange(int arr[],int n)
{
	vector<int> vPos;
	vector<int> vNeg;
	
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			vNeg.push_back(arr[i]);
		}
		else
		{
			vPos.push_back(arr[i]);
		}
		
	}
	
	
	for(int i=0,j=0,k=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(j< vPos.size())
			arr[i]= vPos[j];
		    else{
			    arr[i] = vNeg[k]; k++;	
			}
			j++;
		}
		else{
			 	if(k< vNeg.size())
			arr[i]= vNeg[k];
		    else{
			    arr[i] = vPos[j]; j++;	
			}
			 k++;
		}
	}
}



void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(int argc, char** argv)
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
		rearrange(arr,n);
		print(arr,n);
	}
	return 0;
}