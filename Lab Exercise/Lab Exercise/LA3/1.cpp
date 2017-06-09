#include <iostream>
using namespace std;

struct node{
  int data;
  struct node *next;
};
//creating
node* createnode(int val){
  node* newnode= new node;
  newnode -> data= val;
  newnode -> next = NULL;
  return newnode;
}
//front
void insertFront(node** headref,int val){
  node* newnode=createnode(val);
  if (*headref==NULL) {
    *headref=newnode;
    return;
  }
  newnode->next= *headref;
  *headref=newnode;
}
//at nth position
void insertAtN(node* temp,int val,int pos){
  node* newnode=createnode(val);
  pos=pos-2;
  while (pos--) {
    temp=temp->next;
  }
  newnode->next=(temp)->next;
  (temp)->next=newnode;
}
//at end
void append(node* temp,int val){
  node* newnode= createnode(val);
  while (temp->next!=NULL) {
    temp=temp->next;
  }
  temp->next=newnode;
}
//sorting
void sorting(node** temp){
  int temp;
  struct node *ptr,*ptrr;
  ptr=temp->next;
  while (ptr!=NULL) {
    for (ptr=ptrr->next;condition;inc-expression) {
      statements
    }
  }
}
//printing
void printing(node* printer){
  if (printer==NULL) {
    return;
  }
  cout<<printer->data<<" ";
  printing(printer->next);
  cout<<endl;
}
int main()
{
  node* head=NULL;
  
  insertFront(&head, 5);
  insertFront(&head, 6);
  insertAtN(head, 7, 2);
  insertAtN(head, 1, 4);
  append(head, 23);
  append(head, 24);
  printing(head);
  return 0;
}