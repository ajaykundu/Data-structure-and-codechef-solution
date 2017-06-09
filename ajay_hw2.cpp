
void rightrotation(node* &head,int k)
{
	if(head==NULL)
		return;

	node* slow=head;
	node* fast=head;

	while(k--)
	{
		fast=fast->next;
	}
  while(fast->next !=NULL)
  {
  	fast=fast->next;
  	slow=slow->next;
  }
  fast->next=head;
  head=slow->next;
  slow->next=NULL;
}
