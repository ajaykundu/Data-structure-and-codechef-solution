#include <iostream>
#include <stdlib.h>
using namespace std;

struct dlink
{
	int data;
	struct dlink* next;
	struct dlink* prev;
};

typedef dlink node;

node* createnewnode(int val)
{
	node* newnode=(node *)malloc(sizeof(node));
	newnode->data=val;
	newnode->prev=NULL;
	newnode->next=NULL;
	return newnode;
}

void insertFront(node** headref,int val)
{
	if(*headref==NULL)
	{
	    node* newnode=createnewnode(val);
	    *headref=newnode;
	    return;
	}


	node* newnode1=createnewnode(val);
     (*headref)->prev=newnode1;
	newnode1->next=*headref;
	
	*headref=newnode1;
	return;
}

void insertEnd(node** headref,int val)
{
	if(*headref==NULL)
	{
		 node* newnode=createnewnode(val);
	    *headref=newnode;
	    return;
	}
	
	node* temp=*headref;

	while(temp->next!=NULL)
	{

           temp=temp->next;
          
	}
	//cout<<temp->data<<endl;

	node* newnode1=createnewnode(val);
       temp->next=newnode1;
	newnode1->prev=temp;
	return;

}

void print(node* head)
{
	if(head==NULL)
	{
		cout<<endl;
		return;
	}
    cout<<head->data<<" ";
    print(head->next);
}

void reverselist(node* head)
{
	if(head==NULL)
	{
		cout<<"List is empty"<<endl;
		return;
	}

	while(head->next!=NULL)
	{
		head=head->next;
	}

	while(head->prev!=NULL)
	{
		cout<<head->data<<" ";
	   head=head->prev;
	}
	cout<<head->data;
	cout<<endl;
}

void deletenode(node*& head,int val)
{
	if(head==NULL)
		return;
	if(head->next==NULL)
	{   if(head->data==val)
		head=NULL;
		return;
	}

    node* nextt=head->next;
	node* prevv=head;
	while(nextt!=NULL)
	{
		if(nextt->data==val)
		{
             prevv->next=nextt->next;
             if(nextt->next==NULL)
             {

             }
             else
             {
             	(nextt->next)->prev=prevv;
             }
		}
		nextt=nextt->next;
		prevv=prevv->next;
	}


}

int main(int argc, char const *argv[])
{

	node* head=NULL;
    insertFront(&head,10);
    insertFront(&head,9);
    insertFront(&head,32);
    insertFront(&head,323);
    // for(int i=0;i<1000;i++)
    // {
    // 	insertFront(&head,i);
    // }
    print(head);
    insertEnd(&head,11);
    print(head);
    insertEnd(&head,12);
    print(head);
    reverselist(head);
	
	return 0;
}