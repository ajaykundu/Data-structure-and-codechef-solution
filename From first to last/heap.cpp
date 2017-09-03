#include <iostream>
using namespace std;

//utility function of Minheap.
 
 void swap(int &a,int &b)
 {
 	  int temp=a;
 	  a=b;
 	  b=temp;
 }

class Minheap
{
    int *arr;
    int capacity;
    int heapSize;
    public:

    	Minheap(int cap);  //for the creation of minheap.
    	int parent(int live);  // parent of a node.
    	int leftchild(int live);//left child of a node.
    	int rightchild(int live);// right child of a node.
        void insert(int newele);  //Inserting a newkey.
    	void decreaseKey*(int ,int);  // decrease the key to new_value.



}

Minheap::Minheap(int cap)
{
	  heapSize=0;
	  capacity=cap;
	  arr=new int[cap];
}

int Minheap::parent(int live)
{
	return (live-1)/2;
}

int Minheap::leftchild(int live)
{
	return (2*live +1);
}

int Minheap::rightchild(int live)
{
	return (2*live +2);
}

void Minheap::insert(int newele)
{
	if(heapSize==capacity)
	{
		cout<<"Overflow heap is full"<<endl;
		return;
	}

	heapSize++;

	int insertplace=heapSize-1;
	arr[insertplace]=newele;
	//Now to check whether the inserted element is at correct place in min heap.
    //If it is not at correct place then swap it with its parent node.
    while(insertplace!=0 && arr[parent(insertplace)]>arr[insertplace])
    {
    	  swap(arr[parent(insertplace)],arr[insertplace]);
    	  insertplace=parent(insertplace);
    }

}
    // decrease the value at index i to new_value;
void Minheap::decreaseKey(int i,int new_value)
{
      arr[i]=new_value;

      while(i!=0 && arr[parent(i)] > arr[i])
      {
      	swap(arr[parent(i)],arr[i]);
      	i=parent(i);
      }
}