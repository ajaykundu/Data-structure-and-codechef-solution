#include<iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

struct nodes
{
	int data;
	struct nodes* next;
};

typedef struct nodes node;

node* createnewnode(int data,node* next)
{
	node* newnode=(node*)malloc(sizeof(node));
    newnode->data=data;
    newnode->next=next;
    return newnode;

}

void addfront(node** headref,int data)
{
	if(*headref==NULL)
	{
		node* newnode=createnewnode(data,*headref);
		*headref=newnode;
	}
	else
	{
		node* newnode=createnewnode(data,*headref);
		*headref=newnode;
	}


}

void print(node* head)
{
	if(head==NULL)
	{
		cout<<"this is an empty list";
	}
	else{
		node* temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
              temp=temp->next;

		}
		cout<<endl;
	}
}

int length(node* head)
{
	if(head==NULL)
	{
		return 0;
	}
	return 1+length(head->next);
}

 void addend(node** headref,int data)
 {
        if(*headref==NULL)
        {
        	node* newnode=createnewnode(data,*headref);
        	*headref=newnode;
        	return;
        }
     
        addend(&((*headref)->next),data);  // transversing the list.

 }

void removefront(node** headref)
{     
  if(*headref==NULL)
  {
  	cout<<"list is already empty"<<endl;
  	return;

  }   

	node* remove=*headref;

	*headref=(*headref)->next;
    
    free(remove);
     
}

void removeend(node** headref)
{
	if((*headref)->next==NULL)
	{
		node* remove=*headref;

		*headref=NULL;
		free(remove);
		return;
	}
	else
	{
		node* temp=*headref;
          
          while(((temp)->next)->next!=NULL)
          {
          	temp=temp->next;
          }    
        free(temp->next);
        temp->next=NULL;

	}
}

void deletebyvalue(node* head,int data)
{


	node* temp=head;

	while((temp->next)->data!=data)
	{    
		
         temp=temp->next;
         if(temp->next==NULL)
         	break;
	}
	node* remove=temp->next;

	(temp)->next=(temp->next)->next;
  free(remove);

}

void raplacebyvalue(node* head,int data,int newdata)
{
    

	while(head!=NULL)
	{
		if((head->data)==data)
		{
			(head->data)=newdata;
			
		}
		head=head->next;
     
	}
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


int main()
{
     node* head;
     head=NULL;

   addfront(&head,6);
   addfront(&head,5);
   addfront(&head,3);
   addfront(&head,2);
   addfront(&head,1);
   addfront(&head,8);
   print(head);
addend(&head,7);
  cout<< length(head);
  cout<<endl;
     print(head);
     removefront(&head);
     
     print(head);
    


deletebyvalue(head,6);
print(head);

raplacebyvalue(head,2,4);

print(head);
reverseList(&head);
print(head);


}