#include <stdio.h>
#include <iostream>
#define MAX 3

void display();
void ddelete();
void insert();

int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
	int choice;
	while(1){
		printf("1.insert element to queue\n");
		printf("2.delete elements from queue\n");
		printf("3.display all elements of queue\n");
		printf("4.quit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
			insert();
			break;
		case 2:
			ddelete();
		break;
	case 3:
		display();
		break;
	case 4:
		break;
		default :
			printf("Wrong choice\n");
		}
	}
}

void insert()
{
	int add_item;
	if(rear==MAX-1)
		printf("queue is overflow");
	else
	{
		if(front==-1)
			front=0;
		printf("insert the element in queue:");
		scanf("%d",&add_item);
		rear=rear+1;
		queue_array[rear]=add_item;
	}
}

void ddelete()
{
	if(front==-1 || front>rear)
	{
			printf("queue underflow\n");
	     return ;
		}
	else
	{
		printf("element deleted from the queue is: %d",queue_array[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
		printf("queue is empty");
	else
	{
		printf("queue is : \n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue_array[i]);
			
		}
		printf("\n");
	}
}