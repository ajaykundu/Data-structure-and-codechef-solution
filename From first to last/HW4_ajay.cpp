#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

struct node
{
	int data;
  struct node* next;
};

typedef struct node node;

node* createnewnode(int data,node* next){
	
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=next;
  return newnode;
	
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

int length(node* head)
{
	node* ptr=head;
	int count=0;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

void addfront(node **headref,int data){
	node* newnode=createnewnode(data,NULL);
	newnode->next=*headref;
	*headref=newnode;
	
}

void addend(node **headref,int data)
{
	node* newnode=createnewnode(data,NULL);
	node* ptr=*headref;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=newnode;
}

void removefront(node **headref)
{
	*headref=(*headref)->next;
}

void removeEnd(node **headref)
{
	int lengthl=length(*headref);
	node* ptr=*headref;
	for(int i=0;i<lengthl-2;i++)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
}
void reverseList(node **headref)
{
	node* ptr=*headref;
	node* prev=NULL;
	node* nextt;
	
	while(ptr!=NULL)
	{
		nextt=ptr->next;
		ptr->next=prev;
		prev=ptr;
		ptr=nextt;
		
	}
	*headref=prev;
}

void deletebyvalue(node* head,int data)
{
	node* prev=head;
    node* ptr=head;
   
    
	 
	while(ptr->next!=NULL)
	{
		if(ptr->data==data)
		{
		
		prev->next=ptr->next;
			
		ptr=ptr->next;
		
		}
		else
		{
			prev=ptr;
			ptr=ptr->next;
		}
	}
}

void replacevalue(node* head,int data,int newdata)
{
	node* ptr=head;
	while(ptr->next!=NULL)
	{
		if(ptr->data==data)
		{
			ptr->data=newdata;
		}
		ptr=ptr->next;
	}
}

int main(int argc, char** argv)
{
	node* head;
	head=NULL;
  addfront(&head,5);
  addfront(&head,6);
  addfront(&head,8);
  addend(&head,9);
  
  print(head);
  
  replacevalue(head,6,7);
  print(head);
  deletebyvalue(head,7);
  print(head);
  reverseList(&head);
  print(head);
 // cout<<length(head);
 cout<<endl;
 reverseList(&head);
 print(head);
removefront(&head);
  print(head);
  cout<<endl;
  
  removeEnd(&head);
  print(head);
  
  
  
	return 0;
}