#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

long check_detri(long a,long b,long c)
{

	//cout<<a<<' '<<b<<' '<<c<<endl;
	if(a>=b && a>=c)
	{
		if(a<(b+c)){
			return 1;
		}
	}
	if(b>=a && b>=c)
	{
		if(b<(a+c)){
			return 1;
		}
	}
		if(c>=a && c>=b)
	{
		if(c<(a+b)){
			return 1;
		}
	}
	return 0;
}


int main(int argc, char const *argv[])
{  //cout<<"hello";
	long  arr_len;
	cin>>arr_len;
	long startp;
	cin>>startp;
	long endp;
	cin>>endp;
        map<long,int> m;
   
	for(long i=0;i<arr_len;i++)
	{
              long n;
              cin>>n;
              m[n]=0;      
 	}

   for(int i=0;i<arr_len;i++)
   {
   	cout<<m
   }
    
    long  counter=0;
    long  decider=0;

   for(int i=startp;i<=endp;i++)
   {
         for(map<long ,int>::iterator its=m.begin();its!= m.end();its++)
         {
         	for(map<long,int>::iterator its1=its;its1!=m.end();its1++)
         	{  

         		int ch=check_detri(i,its->first,its1->first);
         		//cout<<ch<<endl;
               if(its->first==its1->first)
               	ch=0;
         		if(ch)
         		{
         			decider=1;
         			
         			break;
         		}
         	}
         	if(decider)
         	{
         		break;
         	}
         }
         if(decider)
         {
         	counter=i;
         	break;
         }
         decider=0;
   }
  int out=(endp - counter +1);

   cout<<out<<endl;

   //cout<<check_detri(1,1,1);
	return 0;
}