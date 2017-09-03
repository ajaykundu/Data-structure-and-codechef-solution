Node* createnewnode(int val)
    {
    Node* newnode=(Node *)malloc(sizeof(Node));
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
}

void addelement(Node ** headref,int val,)
    {
           if(*headref==NULL)
               {
               Node* newnode=createnewnode(val);
               *headref=newnode;
               return;
           }
        addelement(&(*headref)->next,val);
    
}

Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA==NULL)
        {
        return headB;
    }
    if(headB==NULL)
        {
        return headA;
    }
   
   Node* final;

   while(headA!=NULL || headB!=NULL)
   {
    if(headA==NULL)
    {
      while(headB!=NULL)
      {
        addelement(&final,headB->data);
        headB=headB->next;
      }
      }
    }
    else if(headB==NULL)
    {
         addelement(&final,headA->data);
         headA=headA->next;
    }
    else if(headA->data <= headB->data )
    {
           addelement(&final,headA->data);
           headA=headA->next;
    }
    else
    {
      addelement(&final,headB->data);
      headB=headB->next;
    }

   return final;
}
Node* Reverse(Node *head)
{
  // Complete this method
    Node* current=head;
    Node* prev=NULL;
    Node* nextt;
    
    while(current!=NULL)
        {
          nextt=current->next;
        current->next=prev;
        prev=current;
        current=nextt;
    }
    
    return prev;
    
    
}



Node* Reverse(Node *head)
{
  // Complete this method
    Node* current=head;
    Node* prev=NULL;
    Node* nextt;
    
    while(current!=NULL)
        {
          nextt=current->next;
        current->next=prev;
        prev=current;
        current=nextt;
    }
    head=prev;
    return head; 
}


int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
   Node *first=Reverse(headA);
    Node *second=Reverse(headB);
    
    While((first->next)->data==(second->next)->data)
        {
        first=first->next;
        second=second->next;
    }
    
    return first->data;
   
}