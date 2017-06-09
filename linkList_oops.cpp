#include <iostream>
using namespace std;

class node
{
	int data;
	node* next;
public:
	node* createnewnode(int val)
	{
		node* newnode=new node;
		newnode->data=val;
		newnode->next=NULL;
		return newnode;
	}
	void insertfront(node* &head,int val)
	{
		node* newnode=createnewnode(val);
       if(head==NULL)
       {
       	newnode=head;
       	return;
       }

       newnode->next=head;
       head=newnode;
	return;
	}

	void print(node *head)
	{  // cout<<"hello";
        if(head==NULL)
        {
        	return;
        }
        cout<<head->data<<" "; 
        print(head->next);
	 cout<<endl;
	}


	
};

int main(int argc, char const *argv[])
{
	node* head=new node;

   head->insertfront(head,5);
  head->insertfront(head,6);
   head->insertfront(head,7);
   head->print(head);
	return 0;
}