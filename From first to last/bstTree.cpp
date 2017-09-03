//level order 
//depth of tree
// delete full of tree
//minimum node 
//maximum node
//mirror image of a tree.

#include <iostream>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* createnewnode(int data)
{
     node* newnode=new node();
     newnode->data=data;
     newnode->left=NULL;
     newnode->right=NULL;
     return newnode;
} 

void insert(node* &head,int data)
{
      if(head==NULL)
      {
      	node* newnode=createnewnode(data);
      	head=newnode;
      	return;
      }
         else
         {
              if(head->data >= data)
              {
                 insert(head->left,data);
              }	
              else
              {
              	insert(head->right,data);
              }
         }
}

void deletebst(node* &head,int data)
{
     if(head==NULL)
     {
     	return;
     }
     if(head->data==data)
     {
     	if(head->left==NULL && head->right==NULL)
     	{

     	}
     }
}

void preorder(node* head)
{
	if(head==NULL)
	{
		return;
	}
	cout<<head->data<<" ";
	preorder(head->left);
	
	preorder(head->right);
}

int depthoftree(node* head)
{
	if(head==NULL)
	{
		return 0;
	}
	int left=depthoftree(head->left)+1;
	int right=depthoftree(head->right)+1;
	if(left>=right)
	{
		return left;
	}
	else
	{
        return right;
	}
}


int main(int argc, char const *argv[])
{
    	 
    	 node* head=NULL;
    	 insert(head,5);
    	 insert(head,6);
    	 insert(head,4);
    	 insert(head,10);
         insert(head,11);
         insert(head,115);
         insert(head,50);

    	 preorder(head);
    	 cout<<depthoftree(head);

	return 0;
}