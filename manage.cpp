#include <iostream>
using namespace std;

int main()
{
//    cout << "Hello World!" << endl;
  int n;
  cin>>n;
  int old[n],new1[n];
  
  for(int i=0;i<n;i++)
  {
      cin>>old[i]>>new1[i];
  }
  
  int req=0,max=0;
  for(int i=0;i<n;i++)
  {
      if(max<old[i])
      {
          max=old[i];
      }
  }
  int index=0;
  for(int i=0;i<n;i++)
  {
      int var=new1[i]-old[i];
      if(var>req)
      {
      req=var;
      index=i;
     
      }
  }
  
  if(max<=req)
  {
      cout<<old[index];
  }
  else
  cout<<req;
  
  //cout<<req;
    return 0;
}
