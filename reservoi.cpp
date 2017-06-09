#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		int n,m;
		cin>>n>>m;
		string arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}

		int dicider=1;

		for(int i=n-1;i>=0;i--)
		{
			for(int j=m-1;j>=0;j--)
			{
                 if(arr[i][j]=='A')
                 {   

                 	if(i==0)
                 	{
                 		if(j==0)
                 		{
                 			if(arr[i][j+1]=='W')
                 			{
                 				dicider=0;
                 				break;
                 			}
                 		}else
                 		if(j==m-1)
                 		{
                            if(arr[i][j-1]=='W')
                            {
                            	dicider=0;
                            	break;
                            }
                 		}else
                 		{
                 			if(arr[i][j-1]=='W'|| arr[i][j+1]=='W')
                 			{
                 				dicider=0;
                 				break;
                 			}
                 		}

                 	}
                 	else
                 	{
                 		if(j==0)
                 		{
                 			if(arr[i][j+1]=='W' || arr[i-1][j]=='W' || arr[i-1][j]=='B')
                 			{
                 				dicider=0;
                 				break;
                 			}
                 		}else
                 		if(j==m-1)
                 		{
                            if(arr[i][j-1]=='W' || arr[i-1][j]=='W' || arr[i-1][j]=='B')
                            {
                            	dicider=0;
                            	break;
                            }
                 		}else
                 		{
                 			if(arr[i][j-1]=='W'|| arr[i][j+1]=='W' || arr[i-1][j]=='W' || arr[i-1][j]=='B')
                 			{
                 				dicider=0;
                 				break;
                 			}
                 		}
                 	}
                 }
                // cout<<dicider<<" ";

                 if(arr[i][j]=='W')
                 {
                 	if(i==0)
                 	{
                 		if(j==0)
                 		{
                 			dicider=0;
                 			break;
                 		}else if(j==m-1)
                 		{
                 			dicider=0;
                 			break;
                 		}
                 		else
                 		{
                 			if(arr[i][j-1]=='A' || arr[i][j+1]=='A')
                 			{
                 				dicider=0;
                 				break;
                 			}
                 		}

                 	}else
                 	{
                 		if(j==0)
                 		{
                 			dicider=0;
                 			break;
                 		}else
                 		if(j==m-1)
                 		{
                 			dicider=0;
                 			break;
                 		}
                 		else{
                 			if(arr[i][j-1]=='A' || arr[i][j+1]=='A' || arr[i-1][j]=='B')
                 			{
                 				dicider=0;
                 				break;
                 			}
                 		}
                 	}
                 }
			}
			if(dicider==0)
			{
				break;
			}
		}
		if(dicider)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
	return 0;
}