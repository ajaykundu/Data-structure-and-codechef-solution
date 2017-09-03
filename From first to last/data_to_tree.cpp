#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


struct node{
    int data;
    struct node* left;
    struct node* right;
};

node* createNewnode(int val)
    {
       node* newnode=new node;
      newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

void insert(node* ndi,int leftdata,int rightdata)
    {
    if(leftdata==-1)
        {
        ndi->left=NULL;
    }else
        {
           node* newnode=createNewnode(leftdata);
           ndi->left=newnode;
    }
    
    if(rightdata==-1)
        {
        ndi->right=NULL;
    }
    else
        {
        node* newnode=createNewnode(rightdata);
        ndi->right=newnode;
    }
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_nodes;
    cin>>num_nodes;
    
    node* head=createNewnode(1);
    
    
    
    return 0;
}
