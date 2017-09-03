#include <iostream>
#include <stdio.h>
using namespace std;

struct nodes
{
	int data;
	struct nodes* npx;
};

typedef struct nodes node;

class linkListF
{
public:
	
	node* XOR(node* a,node* b);
    void insert(node** headref,int data);    // To add an element to the memory effiecent list.
    void print(node* head);	
};

node* linkListF::XOR(node* a,node* b)
{
	return (node*) ((unsigned int )a^(unsigned int)b);
}


void linkListF::insert(node** headref,int data)
{
	node* newnode=new node;   // Create the new node and providing newnames.
  newnode->data=data;   // assigning the data.

     newnode->npx=XOR(*headref,NULL);

     if(*headref!=NULL)
     {
           node* next=XOR((*headref)->npx,NULL);
           (*headref)->npx=XOR(newnode,next);
     }
    (*headref)=newnode;
}

void linkListF::print(node* head)
{
	if(head==NULL)
		return;
    node* current=head;
    node* prev=NULL;
    node* next;

    while(next!=NULL)
    {
    	cout<<current->data<<" ";
    	next=XOR(prev,current->npx);

    	prev=current;
    	current=next;
    }

}



int main(int argc, char const *argv[])
{
    node *head = NULL;

    linkListF l;
    l.insert(&head, 10);
    l.insert(&head, 20);
    l.insert(&head, 30);
    l.insert(&head, 40);
 
    // print the created list
    l.print (head);
 
    return (0);
}