#include <iostream>
#include <set>
#include <utility>
#include<algorithm>
#define pii pair<int,int> 
#define pint pair<int,pii>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }

	set< pint >  s;
     int lower=0; int heigher=0;
     int frequency=1;
	for(int i=0;i<n;i++)
	{
		while(arr[i]==arr[i+1] && i<n)
		{
			heigher=heigher+1;
			frequency=frequency+1;
			i++;
		}

    s.insert(make_pair(frequency,make_pair(lower,heigher)));
    frequency=1;
    heigher=heigher+1;
    lower=heigher;
	}

	// set<pint>::iterator itrer;
	// for(itrer=s.begin();itrer!=s.end();itrer++)
	// {
	// 	cout<<"frequency : "<<itrer->first<<" lowerB : "<<(itrer->second).first<<" upperB : "<<(itrer->second).second<<endl;
	// }

	while(m--)
	{
		int l,r,k;
		cin>>l>>r>>k;
        l--;
        r--;

		int lower_v_k=(r-l+1)/2;
		int upper_v_K=(r-l)+1;

		set<pint>::iterator lowerB;
		lowerB=s.lower_bound(make_pair(k,make_pair(-1,-1)));
		//cout<<(lowerB->first)<<endl;
       set<pint>::iterator itr;
       int flag=0;
       int element=0;
		for(itr=lowerB;itr!=s.end();itr++)
		{   
			if(l==r)
			{
				flag=1;
				element=arr[l];
				break;
			}else
        // cout<<"hello"<<endl;
			// 	if(itr->first > upper_v_K+1)
			// {
			// 	break;
			// }
			
			 if(l<=(itr->second).first && r>=(itr->second).second)
			{
				flag=1;
				element=arr[(itr->second).first];
				break;
			}
			else
				if(l>=(itr->second).first && r<=(itr->second).second)
				{  //cout<<"hello"<<endl;
					if(r-l>=k-1)
					{
						flag=1;
						element=arr[l];
						break;
					}
				}
				else if(l>=(itr->second).first && r>=(itr->second).second)
				{
					if((itr->second).second-l>=k-1)
					{
						flag=1;
						element=arr[l];
						break;
					}
				}
				else if(l<=(itr->second).first && r<=(itr->second).second)
				{
					if(r-(itr->second).first >= k-1)
					{
						flag=1;
						element=arr[r];
						break;
					}
				}

			
			
		}

		if(flag)
		{
			cout<<element<<endl;
		}
		else{
			cout<<(-1)<<endl;
		}
	}
	return 0;
}