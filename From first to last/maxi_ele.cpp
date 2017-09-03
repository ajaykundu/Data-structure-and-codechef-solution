#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct link
{
	int data;
	struct link *next;
};

typedef struct link node;

node* createnewnode(int data)
{
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=data;
	newnode->next=NULL;
	return newnode;
}

void pushelement(int data,node** headref)
{
	if(*headref==NULL)
	{
		node* newnode=createnewnode(data);
		*headref=newnode;
		return;
	}
	pushelement(data,&((*headref)->next));
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

void removeEnd(node **headref,int *i)
{     

       if((*headref)->next==NULL)
       {
       	if((*headref)->data==NULL)
       	{
       		
       	}
       	*headref=NULL;
       	return;
       }

	int lengthl=length(*headref);
	node* ptr=*headref;
	for(int i=0;i<lengthl-2;i++)
	{
		ptr=ptr->next;
	}
	ptr->next=NULL;
}

int printmax(node* head)
{
	if(head==NULL)
		return 0;

	int max=head->data;
	while(head != NULL)
	{
		if(head->data > max)
		{
			max=head->data;
		}
		head=head->next;
	}
	return max;

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

int main(int argc, char const *argv[])
{
	/* code */
	node* head=NULL;


	int i=0;

	int num_query;
	cin>>num_query;

	while(num_query--)
	{  
		int type;
		cin>>type;

		if(type==1)
		{
			int n;
			cin>>n;
			if(n>i)
			{
				i=n;
			}
			pushelement(n,&head);
		}else if(type==2)
		{
			removeEnd(&head,&i);
		}else if(type==3)
		{
			cout<<printmax(head)<<endl;
		}
		print(head);
		
	}
	return 0;
}