#include <iostream>
using namespace std;

struct tree
{
	int info;
	struct tree* left;
	struct tree* rigth;
	
	
};

typedef struct tree treenode;

treenode* create_new_treenode(int info,treenode* left=NULL,treenode* rigth=NULL,treenode* parent=NULL ){
	treenode* newnode;
	newnode->info=info;
	newnode->left=left;
	newnode->rigth=rigth;
	newnode->rigth=parent;

	return newnode;
	
}

void printinorder(treenode* root)
{
	if(root==NULL)
	{
		return;
	}
	printinorder(root->left);
	cout<<root->info;
	printinorder(root->rigth);

}

void insertbst(treenode** rootref,int val,treenode* parent=NULL)
{
    if(*rootref==NULL)
    {
    	treenode* newnode=create_new_treenode(val);
    	*rootref=newnode;
    	return;
    }
     if((*rootref)->info>=val)
     {
     	insertbst(&((*rootref)->left),val);
     }
     else
     {
     	insertbst(&((*rootref)->rigth),val);
     }

}

int main(int argc, char** argv)
{
	cout<<"hello tree";

    treenode* root=NULL;

     insertbst(&root,5);

     printinorder(root);

	return 0;
}