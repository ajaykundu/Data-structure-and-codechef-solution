#include <iostream>
using namespace std;

struct node
{
	int data;
	node* prev;
	node* next;
};

node* createnewnode(int val)
{
	node* newnode=(node*)malloc(sizeof(node));

	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}

void insertfront(node* &head,int val)
{
	node* newnode=createnewnode(val);
    node* temp=head;

	if(head==NULL)
	{
		
		head=newnode;
		return;
	}
    
    newnode->next=head;
    head=newnode;

}

void insertPosition(node* &head,int val,int position)
{
	node* tem
}

int main(int argc, char const *argv[])
{
	
	return 0;
}