#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace  std;

struct list_node
{
	int data; // data stored with the current node.
	struct list_node * next;   // data for the storage of address of next node.
};

typedef  list_node node;

node* CreateNewNode(int val,node* next=NULL){

	  node* newnode=(node *)malloc(sizeof(node));// creating a newnobe or allocation of memory.
      
      newnode->data=val;
      newnode->next=NULL;

      return newnode;
}

int LengthofList(node* head)
{
	int count=0;
    node* succucessor=head;// for the movement on successive node.

	while(succucessor->next!=NULL)
	{
		count++;
		succucessor=succucessor->next;
	}
	return count;
}

void print(node* head)
{
	node* ptr=head;
	while(ptr!= NULL )
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	cout<<endl;
}

void addFront(node** headref,int val)
{
	node* newnode=CreateNewNode(val,NULL);
	newnode->next=*headref;
	*headref=newnode;

}

int main(int argc, char const *argv[])
{

   node* head=NULL;
   addFront(&head,5);
   addFront(&head,6);
    addFront(&head,6);
     addFront(&head,6);
   print(head);

   cout<<"hello World";
	return 0;
}