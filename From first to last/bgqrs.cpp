#include<iostream>
using namespace std;
int main()
{
	int testcase;  cin>>testcase; // number of testcases
	
	
	
	while(testcase>0)
	{   int counter=0; // this will calculate the number of zeros coming at the end of each query
		int length_of_array;  cin>>length_of_array; // length of array
	int number_of_query;  cin>>number_of_query; // number of the queries entered by the user
	
	int er[length_of_array];
	for(int i=0;i<length_of_array;i++)
	{
		cin>>er[i];
		//cout<<"check array input"<<endl;
	}
	
	for(int i=0;i<number_of_query;i++)
	{
		int qt;  cin>>qt;
		
	//	cout<<"input qt";
		
		if(qt==1){
			int l,r,x;
			cin>>l>>r>>x;
			for(int tip=l-1;tip<=r-1;tip++)
			{  //cout<<"check ing qt=1"<<endl;
				er[tip]=er[tip]*x;
			}
		}
		if(qt==2)
		{
			int l,r,y;
			cin>>l>>r>>y;
			for(int tip=l-1;tip<=r-1;tip++)
			{   //  cout<<"checking qt=2;"<<endl;
				er[tip]=(tip-l+2)*y;
				
			}
		}
		if(qt==3)
		{     
			
			int l,r;  cin>>l>>r;
			long long product=1;
			for(int tip=l-1;tip<=r-1;tip++)
			{//  cout<<"calculating product"<<endl;			    
				product=product*(long)er[tip];
				
			}
		while(product>0 && (product%10)==0)	
		{   
			  counter++;
			  product=product/10;
			  
		}
		
		}
		
	}
//	counter++;
	
	cout<<counter<<endl;
	testcase--;
	
	}
}
