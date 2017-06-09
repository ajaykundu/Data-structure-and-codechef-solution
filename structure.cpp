#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct linklist
{
	int data;
	struct linklist * next;
};

typedef struct linklist node;

void addElement(int val,node* headref)
{
	node newnode;
	newnode.data=val;
	newnode.next=NULL;
    (*headref).next=&newnode;
     
}

void print(node head)
{
     while(head.next!=NULL)
     {
     	cout<<head.data<<" ";
           head.next=(head.next).next;
     	     }
     	     cout<<endl;
}


int main(int argc, char** argv)
{
    node head;
    head.next=NULL;
    head.data=0;



}