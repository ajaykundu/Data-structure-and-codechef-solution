#include <iostream>
using namespace std;

struct pair
{
	int min;
	int max;
};

struct pair minmax(int arr[],int low,int high)
{
	struct pair minmaxval,mml,mmr;
	
	if(low==high)
	{
		minmaxval.min = arr[low];
		minmaxval.max = arr[low];
		return minmaxval;
	}
	
	if(high == low + 1)
	{
		if(arr[low] > arr[high])
		{
			minmaxval.min = arr[high];
			minmaxval.max = arr[low];
		}
		else {
			minmaxval.min = arr[low];
			minmaxval.max = arr[high];
		}
	}
	mid = (low + high)/2;
	mml = minmax(arr,low,mid);
	mmr = minmax(arr,mid+1,high);
	
	if(mml.min < mmr.min)
	{
		minmaxval.min = mml.min;
	}
	else 
	{
		minmaxval.min = mmr.min;
	}
	
	if(mml.max < mmr.max)
	{
		minmaxval
	}
}

int main(int argc, char** argv)
{
	
	return 0;
}