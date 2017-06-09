#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
			}

			while(m--)
			{
                  int l,r,k;
                  cin>>l>>r>>k;
              int element=-2;
              int num=0;
              int decider=0;
                  for(int i=(l-1);i<(r-1);i++)
                  {
                  	int counter=1;

                  	for(int j=i+1;j<(r);j++)
                  	{
                  		if(arr[i]==arr[j] && counter>num)
                  		{
                  			counter++;
                  			if(counter>k)
                  			{
                  				element=arr[i];
                  				num=counter;
                  				decider=1;
                  				break;
                  			}
                  			
                  		}
                  		else
                  			{
                  				counter=1;
                  			}
                  		//cout<<counter<<endl;
                  	}

                  }

                 if(decider)
                 {
                 	cout<<element<<endl;
                 }
                 else
                 	cout<<(-1)<<endl;
			}
	return 0;
}