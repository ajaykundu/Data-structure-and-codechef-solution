#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    float n;
	    cin>>n;
	    float stairspeed;
	    cin>>stairspeed;
	    float elevatorspeed;
	    cin>>elevatorspeed;

	    float stairspeedtime;
	    stairspeedtime= n * sqrt(2)/stairspeed;
	    float elevatorspeedtime;
	    elevatorspeedtime= (2*n)/elevatorspeed;
	   // cout<<stairspeedtime<<" "<<elevatorspeedtime<<endl;
	    if(stairspeedtime < elevatorspeedtime)
	    {
          cout<<"Stairs"<<endl;
	    }
	    else {
	    	cout<<"Elevator"<<endl;
	    }
 	}

	return 0;
}