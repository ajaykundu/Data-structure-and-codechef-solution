#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* createnode(int n)
{
    node* newnode = new node();
    newnode->data = n;
    newnode->next = NULL;
    return newnode;
    
}

node* buildList(node* head,int n)
{    node* newnode=createnode(n);
    if(head==NULL)
       return newnode;
     
     node* temp=head;
     while(temp->next!=NULL)
     temp = temp->next;
     temp->next = newnode;
     return head;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head -> next;
    }
}

node* swapnodes(node* head,int firstnum,int secondnum)
{
    node* firstprev =NULL;
    node* firstptr = head;
    node* secondprev = NULL;
    node* secondptr = head;
    while(firstptr->data!=firstnum)
    {
        firstprev = firstptr;
        firstptr = firstptr->next;
    }
    while(secondptr->data!=secondnum)
    {
        secondprev = secondptr;
        secondptr = secondptr->next;
    }
    
    if(firstprev==NULL || secondprev==NULL)
    {
        if(firstprev==NULL)
        {
            head = secondptr;
            secondprev ->next = firstptr;
            node* saveptr = secondptr -> next;
            secondptr -> next = firstptr -> next;
            firstptr -> next = saveptr;
        }else
        if(secondptr==NULL)
        {
            head = firstptr;
            firstprev -> next = secondptr;
            node* saveptr = firstptr -> next;
            firstptr -> next = secondptr -> next;
            secondptr -> next = saveptr;
        }
    }
    else {
        firstprev -> next = secondptr;
        secondprev -> next = secondptr;
        node* saveptr = firstprev->next;
        secondptr -> next = firstptr -> next;
        firstptr -> next = saveptr;
        
    }
    return head;
}

int main()
{
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int sizeoflinklist;
        cin>>sizeoflinklist;
       node* head=NULL;
       for(int i=0;i<sizeoflinklist;i++)
       {
           int num;
           cin>>num;
           head = buildList(head,num);
       }
       print(head);
       cout<<endl;
       int tu,pu;
       cin>>tu>>pu;
        head = swapnodes(head,tu,pu);
        print(head);
        cout<<endl;
    }
}
