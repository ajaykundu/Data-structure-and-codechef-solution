#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct tree
{
	int info;
	struct tree* left;
	struct tree* right;
	
};

typedef struct tree treenode;

treenode* CreateNewNode(int val,treenode* left=NULL,treenode* right=NULL)
{
    treenode* newnode=(treenode*)malloc(sizeof(treenode));
    newnode->info=val;
    newnode->left=left;
    newnode->right=right;
    return newnode;
}

void insertBST(treenode** rootref,int val)
{
      if(*rootref==NULL)
      {
      	treenode* newnode=CreateNewNode(val);
      	*rootref=newnode;
      	return;
      }


	if((*rootref)->info >= val)
	{
           insertBST(&(*rootref)->left,val);
	}
	else
		insertBST(&(*rootref)->right,val);
}

void printInOrder(treenode* root)
{
	if(root==NULL)
	{
		return;
	}

	printInOrder(root->left);
      cout<<root->info<<" ";
	printInOrder(root->right);

}

treenode* treeminimum(treenode* root)
{
	if(root->left==NULL)
	{
		return root;
	}
	return treeminimum(root->left);
}

treenode* treemaximum(treenode* root)
{
	if(root->right==NULL)
	{
		return root;
	}
	return treemaximum(root->right);
}

treenode* treesuccessor(treenode* root)
{
	treenode* newnode=treeminimum(root->right);
	return newnode;
}

int getHeight(treenode* root)
{    
	  if(root==NULL)
	  {
	  	return 0;
	  }

    int  lh=getHeight(root->left)+1;
    int  rh=getHeight(root->right)+1;
    return lh>rh?lh:rh;
}

int isBalanced(treenode* root)
{
     if(root==NULL)
     {
         return 1;
     }

	int lh=getHeight(root->left);
	int rh=getHeight(root->right);

	if(lh-rh>1 || lh-rh<-1)
		return 0;
	return 1;
}

void deleteBST(treenode** rootref,int val)
{
       if(*rootref==NULL)
       	return;

	if((*rootref)->info > val)
	{
		deleteBST(&(*rootref)->left,val);
	}else
	if ((*rootref)->info < val)
	{
		deleteBST(&(*rootref)->right,val);
	}
	else            // deleted node found
	{
		if((*rootref)->right==NULL && (*rootref)->left==NULL)
		{
			//case 1: leaf node.
			treenode* deletenode=*rootref;
			*rootref=NULL;
			free(deletenode);
		}
		else if((*rootref)->right==NULL )
		{
			//case 2: only have left branch
            treenode* deletenode=*rootref;
            *rootref=(*rootref)->left;
            free(deletenode);
		}
		else if((*rootref)->left==NULL)
		{   //case 3: only have right branch
			treenode* deletenode=*rootref;
			*rootref=(*rootref)->right;
			free(deletenode);
		}
		else{
		      //case 4 : have both the branches.
            treenode** successoref=&((*rootref)->right);
            while((*successoref)->left!=NULL)
            	
		}
	}
}

int main(int argc, char const *argv[])
{
	/* code */

	treenode* root=NULL;

	insertBST(&root,12);
	insertBST(&root,14);
    insertBST(&root,10);
    insertBST(&root,16);
    insertBST(&root,13);
    insertBST(&root,17);
    insertBST(&root,9);
    printInOrder(root);
    cout<<endl;
  //   treenode* newnode=treeminimum(root);
  //   cout<<newnode->info;

  //   cout<<endl;
  //   treenode* newnode1=treesuccessor(root);
  //   cout<<newnode1->info;
    
  //  cout<<endl<< getHeight(root);
    // cout<<isBalanced(root);
    
    deleteBST(&root,12);
    // cout<<"hello world";
    printInOrder(root);

	return 0;
}