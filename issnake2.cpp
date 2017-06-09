#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
 
	while(testcases--)
	{
 
         int n; cin>>n;
 
         string arr1,arr2;  cin>>arr1>>arr2;
 
         int x=-1,y=-1;
         int snakecounter=0;
    
         for (int i = 0; i < n; ++i)
         {
         	 if(x==-1 && y==-1)
         	 {
         	 	if(arr1[i]=='#')
         	 	{
         	 		x=1; y=i;
         	 	}
         	 	 if(arr2[i]=='#'){
                     x=2; y=i;      
         	 	}
         	 }
         	 else{
 
         	 	 if(x==1)  //it means in upper block.
         	 	 {
                       if(arr1[i]=='#')
                       {
                       	  x=1; //move upper horizontally.
                       	  y=i;
                       	  if(arr2[i]=='#')
                       	  {
                       	  	x=2;
                       	  	y=i;
                       	  }
                       }
                       else{
                       	    snakecounter++;
                       	    x=-1;y=-1;
                           if(arr2[i]=='#')
                           {
                           	x=2; y=i;
                           }
 
                       }
         	 	 }else
 
         	 	 if(x==2)
         	 	 {
         	 	 	if(arr2[i]=='#')
         	 	 	{
         	 	 		x=2;
         	 	 		y=i;
         	 	 		if(arr1[i]=='#')
         	 	 		{
         	 	 			x=1;
         	 	 			y=i;
         	 	 		}
         	 	 	}
         	 	 	else
         	 	 	{
         	 	 		snakecounter++;
         	 	 		x=-1;y=-1;
         	 	 		if(arr1[i]=='#')
         	 	 		{
         	 	 			x=1;y=i;
         	 	 		}
         	 	 	}
         	 	 }
         	 }
 
   cout<<"snake counter after each iteration:"<<snakecounter<<endl;
   cout<<x<<" "<<y<<endl;
         }
 
  if(x!=-1 && y!=-1)
  {
  	snakecounter++;
  }
 
    if(snakecounter==1)
    {
    	cout<<"yes"<<endl;
    }
    else{
    	cout<<"no"<<endl;
    }
	}
	return 0;
} 