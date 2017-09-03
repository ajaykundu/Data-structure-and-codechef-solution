#include <stdio.h>
#include <stdlib.h>


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
  return &newnode;
	
}

void print(node* head)
{
	node* ptr=head;
	while(ptr!= null )
	{
		printf("%d",ptr->data);
		ptr=ptr->next;
	}
}

int length(node* head)
{
	node* ptr=head;
	int count=0;
	while(ptr!=null)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}

void addfront(node **headref,int data){
	node* newnode=createnewnode(data,null);
	newnode->next=*headref;
	*headref=newnode;
s	
}

int main(int argc, char** argv)
{
	node* head;
	head=null;
  

	return 0;
}