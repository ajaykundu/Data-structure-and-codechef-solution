#include <iostream>
using namespace std;

struct node
{
	int data;
	struct node* next;
};

node* createnewnode(node* head,int data)
{
	node* newnode=new node();
	newnode->data=data;
	newnode->next=head;
	return newnode;
}

void insertFront(node* &head,int data)
{
   if(head==NULL)
   {
       node* newnode=createnewnode(head,data);
       newnode->next=newnode;
       head=newnode;
       return;
   }
   node* temp=head;
   while(temp->next!=head)
   {
   	   temp=temp->next;

   }
    node* newnode=createnewnode(head,data);

    head=newnode;
    temp->next=head;
}


void print(node* head)
{
	if(head==NULL)
		return;
      node* temp=head;
      //cout<<head->data<<" ";

      do{
      	cout<<temp->data<<" ";
      	temp=temp->next;
      }
      while(temp!=head);
   
      
}



int main(int argc, char const *argv[])
{
	node* head=NULL;
	insertFront(head,10);
	insertFront(head,20);
	insertFront(head,30);
	print(head);
	return 0;
}