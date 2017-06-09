#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <map>
using namespace std;

struct adjlistNode
{
	int data;
    adjlistNode* next;
};

struct adjlist
{
	adjlistNode* head;
};

struct Graph
{
	int v; // number of vertices.
    adjlist* array;
};

adjlistNode* createnewnode(int data)
{
	adjlistNode* newnode=(adjlistNode*)malloc(sizeof(adjlistNode));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

//creating of graph vertices.

Graph* graphcreation(int v)
{
      //v is the number of vertices.
	Graph* gr=(Graph*)malloc(sizeof(Graph));  // creating a graph.

	gr->v=v;// creating number of vertices.

	//creating a array of adjlist.

	gr->array=(adjlist*)malloc(v*sizeof(adjlist));

	for(int i=0;i<v;i++)
	{
		(gr->array[i]).head=NULL;
	}
   return gr;
}

void addNode(Graph* gr,int src,int dest)
{
	adjlistNode* newnode=createnewnode(dest);  //creating a newnode.
    newnode->next=(gr->array[src]).head;
    (gr->array[src]).head=newnode;

    //this is a undirected graph.

    newnode=createnewnode(src);
    newnode->next=(gr->array[dest]).head;
    (gr->array[dest]).head=newnode;
}


//printing of the graph.
void printGraph(Graph* gr)
{
	for(int i=0;i<gr->v;i++)
	{
		adjlistNode* temp=(gr->array[i]).head;

		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<endl;
	}

}




int main(int argc, char const *argv[])
{
	Graph* gr=graphcreation(5);
	addNode(gr,0,1);
	addNode(gr, 0, 4);
    addNode(gr, 1, 2);
    addNode(gr, 1, 3);
    addNode(gr, 1, 4);
    addNode(gr, 2, 3);
    addNode(gr, 3, 4);
    
    printGraph(gr);

	return 0;
}