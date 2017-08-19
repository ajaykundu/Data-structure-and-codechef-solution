#include<bits/stdc++.h>
using namespace std;

int bob(vector<int> v)
{
	int dicider=1;
	int turn=0; // alice turn.

	map<int,int> hash;

	for(int i=0;i<v.size();i++)
	{
     hash[v[i]]=1;
	}

   while(dicider)
   {
   	dicider=0;
   	for(int i=0;i<v.size();i++)
   	{
         for(int j=i+1;j<v.size();j++)
         {
         	if(hash[abs(v[i]-v[j])]==0)
         	{
         		cout<<turn<<endl;
                v.push_back(abs(v[i]-v[j]));
                hash[abs(v[i]-v[j])]=1;

               if(turn==1)
               {
               	   turn=0;

               }
               else turn=1;
               dicider=1;
         	}
         }
   	}
   }
   for(int i=0;i<v.size();i++)
   {
   	   cout<<v[i]<<" ";
   }
   cout<<endl;

   return turn;
}

int main(int argc, char const *argv[])
{
	std::vector<int> v;
   for(int i=0;i<2;i++)
   {
   	int vt;
   	cin>>vt;
   	v.push_back(vt);
   }
	if(bob(v))
		cout<<"alice";
	else cout<<"bob";
	return 0;
}