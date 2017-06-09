#include <iostream>
using namespace std;

int smaller(int x,int y)
{
	if(x>y)
		return y;
	return x;
}

int larger(int x,int y)
{
	if(y>x)
	{
		return y;
	}
	return x;
}

bool hh(int fx1,int fy1,int fx2,int fy2,int sx1,int sy1,int sx2,int sy2)
{
       if(fy1!=sy1)
       {
       	return false;
       }
       else {
       	      // for smaller case.
       	    int small1=smaller(fx1,fx2);
       	    int larger2=larger(sx1,sx2);
       	    if(small1>larger2)
       	    {
       	    	return false;
       	    }
       	    int larger1=larger(fx1,fx2);
       	    int small2=smaller(sx1,sx2);
       	    if(larger1<small2)
       	    {
       	    	return false;
       	    }
       }
       return true;
}


bool hv(int fx1,int fy1,int fx2,int fy2,int sx1,int sy1,int sx2,int sy2)
{
       if((fx1==sx1 && fy1==sy1) || (fx1==sx2 && fy1==sy2) || (fx2==sx1 && fy2==sy1) || (fx2==sx2 && fy2==sy2))
       {
       	return true;
       }	
  

	return false;
}


bool vh(int fx1,int fy1,int fx2,int fy2,int sx1,int sy1,int sx2,int sy2)
{
	if((fx1==sx1 && fy1==sy1) || (fx1==sx2 && fy1==sy2) || (fx2==sx1 && fy2==sy1) || (fx2==sx2 && fy2==sy2))
       {
       	return true;
       }	
       return false;
}


bool vv(int fx1,int fy1,int fx2,int fy2,int sx1,int sy1,int sx2,int sy2)
{
	    if(fx1!=sx1)
	    {
	    	return false;
	    }
	    else 
	    {
	    	int small1=smaller(fy1,fy2);
	    	int large2=larger(sy1,sy2);
	    	if(large2<small1)
	    	{
	    		return false;
	    	}
	    	int large1=larger(fy1,fy2);
	    	int small2=smaller(sy1,sy2);
	    	if(small2>large1)
	    	{
	    		return false;
	    	}
	    }

	    return true;
}  

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;

	while(testcases--)
	{
		bool ans=true;

		int fx1,fy1,fx2,fy2;  cin>>fx1>>fy1>>fx2>>fy2;
		int sx1,sy1,sx2,sy2;  cin>>sx1>>sy1>>sx2>>sy2;

        if(fy1==fy2 && sy1==sy2)
        {
                ans=hh(fx1,fy1,fx2,fy2,sx1,sy1,sx2,sy2);
        }else if(fy1==fy2 && sx1==sx2)
        {
        	ans=hv(fx1,fy1,fx2,fy2,sx1,sy1,sx2,sy2);
        }else if(fx1==fx2 && sy1==sy2)
        {
        	ans=vh(fx1,fy1,fx2,fy2,sx1,sy1,sx2,sy2);
        }
        else{
        	ans=vv(fx1,fy1,fx2,fy2,sx1,sy1,sx2,sy2);
        }
            if(ans)
            {
            	cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
	}
	return 0;
}