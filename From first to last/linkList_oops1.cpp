#include <iostream>
using namespace std;

class node
{
public:
	int data;  // to store the data at nodes.
	node* next; // pointer to store next node address.
	
	// node* createnewnode(int val);  // for the creation of newnode.
	// node* insertFront(node* head,int val);	// for the insertion of element at front;
	// void print(node* head);  // for the printing of the linklist.
};

class nodeutility
{
public:
	node* createnewnode(int val)
{
	node* newnode=new node();
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
}

node* insertFront(node* head,int val)
{
	node* newnode=createnewnode(val);
	newnode->next=head;
	head=newnode;
	return head;
}

void print(node* head)
{
    while(head!=NULL)
    {
    	cout<<head->data<<" ";
    	head=head->next;
    }
}

	
};

int main(int argc, char const *argv[])
{
	node* head=NULL;
    nodeutility s;
	s.insertFront(head,5);
	s.insertFront(head,6);
	s.insertFront(head,7);
	s.print(head);
	return 0;
}