#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


struct trees
{
	int info;
	struct trees* left;
	struct trees* rigth;
};
typedef struct trees treenode;

treenode* createnewnode(int val)
{
	treenode* newnode=(treenode*)malloc(sizeof(treenode));
    newnode->info=val;
      newnode->left=NULL;
	newnode->rigth=NULL;
    return newnode;
}

void insertbst(treenode** rootref,int val)
{
	if(*rootref==NULL)
	{
		treenode* newnode=createnewnode(val);
		*rootref=newnode;
		return;
	}
	if((*rootref)->info>=val)
	{
	    insertbst(&(*rootref)->left,val);
	}
	else
		insertbst(&(*rootref)->rigth,val);
}

void printinorder(treenode* root)
{
	if(root==NULL)
	{
		return;
	}
	printinorder(root->left);
   printf("%d\n",root->info);
   printinorder(root->rigth);

}

int main(int argc, char const *argv[])
{
	treenode* head;
	head=NULL;
 int i;
 cin>>i;
 for(int n=0;n<i;n++)
 {
 	int t;
 	scanf("%d",&t);
 	insertbst(&head,t);
 }
printinorder(head);
	return 0;
}