#include <iostream>
#include <stack>
using namespace std;

class list{
	public :
	int data;
	list* next;
	
};





class listhead{
public:
	list* head;
void add(int dest);// for the addition of an element in the linklist.
list* createnewnode(int data);// this will generate a new node.
};

list* listhead::createnewnode(int data)
{
	list* newnode=new list;

	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

void listhead::add(int dest)
{
	list* newnode=createnewnode(dest);
      if(head==NULL)
      {
           
           head=newnode;
           return ;
      }	

      list* temp=head;
      while(temp->next!=NULL)
      {
      	   temp=temp->next;
      }
     temp->next=newnode;
     return;
}

class graph{
public:

	int v;// number of vertices accosiated with it.
	listhead* args; // number of list we have to made for it.
    
   graph(int v)  // create number of vertices of graph and create head.
   {
	this->v=v;
	args=new listhead[v];

	for(int i=0;i<v;i++)
	{
		args[i].head=NULL;
	}
}

   void insert(int src,int dest);//insert an edge between source and destination.

   void dfs(int src);
};

void dfs(int src)
{
	bool visit[v]=false;
    stack<int> s;
    s.push(src);
    visit[src]=true;

    while(!s.empty())
    { 

    	list* temp=args[src].head;
    	while(temp!=NULL)
    	{
    		
    	}

    }

}

void graph::insert(int src,int dest)
{
      args[src].add(dest);

}

int main(int argc, char const *argv[])
{
	graph g1(5);
    g1.insert(0,1);
	g1.insert(1,2);
	g1.insert(2,3);
	g1.insert(3,4);

	g1.dfs();
	return 0;
}