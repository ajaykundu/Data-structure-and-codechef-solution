#include <iostream>
#include <cassert>
using namespace std;

class Node{

	friend class List;
	friend class ListUtility;

	int data;
	Node* next;

public:
	Node(int data,Node* next=NULL){
		this->data=data;
		this->next=next;
	}

};

class List{

	Node* head;//this can be modified by the member functions of the class List without passing it as an parameter or using double pointer

public:
	List(){
		head=NULL;
	}

	List(Node* head){
		this->head=head;
	}

	Node* getHead(){
		return head;
	}

	//member functions

	Node* push(int data);
	Node* append(int data);
	Node* insertAfter(Node* prev,int data) const;
	Node* insertAt(int pos,int data);

	bool remove(int pos);
	bool remove(Node* current);
	Node* find(int key) const;//will find the first occurence
	Node* findRecursive(Node* head,int key) const;
	bool removeDuplicates() const;

	int getData(Node* current) const;
	int getData(int pos) const;

	void print() const;

	void printReverse(Node* head) const;//in this case the head is passed as parameter, modifying the function head won't modify the data member

	int length() const;
	int lengthRecursive(Node* head) const;

	bool swap(int key1,int key2);

	void sort();//pending
	void reverse();

	void clear();

};

class ListUtility{

	static void moveNode(Node** des,Node** source);
public:
	static Node* sortedMerge(Node* head1,Node* head2);//lists should be sorted and heads of both the lists will be changed
	static Node* sortedMergeRecursion(Node* head1,Node* head2);//lists should be sorted and heads of both the lists will be changed
	static bool areIdentical(Node* head1,Node* head2);

};

void List::print() const{

	Node* temp=head;

	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	cout<<endl;

}

void List::printReverse(Node* head) const{

	if(head==NULL){
		return;
	}

	printReverse(head->next);
	cout<<head->data<<" ";

}

Node* List::push(int data){

	Node* temp=head;

	Node* newNode=new Node(data,temp);
	head=newNode;

	return newNode;

}

Node* List::append(int data){

	Node* temp=head;

	Node* newNode=new Node(data);

	if(temp==NULL){
		head=newNode;
		return newNode;
	}

	while(temp->next!=NULL){
		temp=temp->next;
	}

	temp->next=newNode;

	return newNode;

}

Node* List::insertAfter(Node* prev,int data) const{

	if(prev==NULL){
		return NULL;
	}

	Node* newNode=new Node(data,prev->next);
	prev->next=newNode;

	return newNode;

}

Node* List::insertAt(int pos,int data){

	if(pos<0){
		return NULL;
	}

	Node* temp=head;
	Node* prev=NULL;

	if(pos==0){
		Node* newNode=new Node(data,temp);
		head=newNode;
		return newNode;
	}

	for(int i=0;i<pos && temp!=NULL;i++){
		prev=temp;
		temp=temp->next;
	}

	if(temp==NULL){
		return NULL;
	}

	Node* newNode=new Node(data,temp);
	prev->next=newNode;

	return newNode;

}

bool List::remove(int pos){

	Node* temp=head;
	if(pos<0 || temp==NULL){
		return false;
	}

	if(pos==0){
		head=temp->next;
		delete temp;
		return true;
	}

	Node *prev=NULL;

	for(int i=0;i<pos && temp!=NULL;i++){
		prev=temp;
		temp=temp->next;
	}

	if(temp==NULL){
		return false;
	}

	prev->next=temp->next;

	delete temp;

	return true;

}

bool List::remove(Node* current){

	if(current==NULL){
		return false;
	}

	Node* temp=head;

	if(temp==current){
		head=temp->next;
		delete temp;
		return true;
	}

	while(temp->next!=current){
		temp=temp->next;
	}

	temp->next=current->next;

	delete current;

	return true;

}

Node* List::find(int key) const{

	Node* temp=head;

	if(temp==NULL){
		return NULL;
	}

	while(temp!=NULL && temp->data!=key){
		temp=temp->next;
	}

	if(temp==NULL){
		return NULL;
	}

	return temp;

}

int List::getData(Node* current) const{
	return current->data;
}

int List::getData(int pos) const{

	Node* temp=head;

	for(int i=0;i<pos;i++){
		temp=temp->next;
	}

	return temp->data;

}

Node* List::findRecursive(Node* head,int key) const{

	if(head==NULL){
		return NULL;
	}

	if(head->data==key){
		return head;
	}

	return findRecursive(head->next,key);

}

int List::length() const{

	int count=0;
	Node* temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->next;
	}

	return count;

}

int List::lengthRecursive(Node* head) const{

	if(head==NULL){
		return 0;
	}

	return 1+lengthRecursive(head->next);

}

bool List::swap(int key1,int key2){

	Node *prev1=NULL,*temp1=head,*prev2=NULL,*temp2=head;

	while(temp1!=NULL && temp1->data!=key1){
		prev1=temp1;
		temp1=temp1->next;
	}

	while(temp2!=NULL && temp2->data!=key2){
		prev2=temp2;
		temp2=temp2->next;
	}

	if(temp1==NULL || temp2==NULL){
		return false;
	}

	if(prev1==NULL){
		head=temp2;
	}else{
		prev1->next=temp2;
	}

	if(prev2==NULL){
		head=temp1;
	}else{
		prev2->next=temp1;
	}

	Node* temp=temp1->next;
	temp1->next=temp2->next;
	temp2->next=temp;

	return true;

}

void List::reverse(){

	Node *prev=NULL,*current=head,*next=NULL;

	while(current!=NULL){

		next=current->next;
		current->next=prev;
		prev=current;
		current=next;

	}

	head=prev;

}

void List::clear(){

	Node* temp=head;
	Node* temp1;

	while(temp!=NULL){
		temp1=temp->next;
		delete temp;
		temp=temp1;
	}

	head=NULL;
}

bool List::removeDuplicates() const{

	Node* temp=head;

	if(temp==NULL){
		return false;
	}

	Node* temp1=NULL;

	while(temp->next!=NULL){
		if(temp->data==temp->next->data){
			temp1=temp->next->next;
			delete(temp->next);
			temp->next=temp1;
		}else{
			temp=temp->next;
		}
	}

	return true;

}

void ListUtility::moveNode(Node** des,Node** source){

	Node* newNode=*source;
	assert(newNode!=NULL);
	*source=newNode->next;

	newNode->next=*des;
	*des=newNode;

}

Node* ListUtility::sortedMerge(Node* head1,Node* head2){

	Node* result=NULL;
	Node** tail=&result;

	while(true){

		if(head1==NULL){

			*tail=head2;
			break;

		}else if(head2==NULL){

			*tail=head1;
			break;

		}

		if(head1->data<=head2->data){

			moveNode(tail,&head1);

		}else{

			moveNode(tail,&head2);

		}

		tail=&((*tail)->next);
		
	}

	return result;

}

Node* ListUtility::sortedMergeRecursion(Node* head1,Node* head2){

	Node* result=NULL;

	if(head1==NULL){
		return head2;
	}else if(head2==NULL){
		return head1;
	}

	if(head1->data<=head2->data){
		result=head1;
		result->next=sortedMergeRecursion(head1->next,head2);
	}else{
		result=head2;
		result->next=sortedMergeRecursion(head1,head2->next);
	}

	return result;

}

bool ListUtility::areIdentical(Node* head1,Node* head2){

	while(head1!=NULL && head2!=NULL){

		if(head1->data!=head2->data){
			return false;
		}

		head1=head1->next;
		head2=head2->next;

	}

	return (head1==NULL && head2==NULL);

}

int main()
{
	
	List list1;
	list1.append(10);
	list1.append(20);
	list1.append(30);
	list1.print();

	List list2;
	list2.append(22);
	list2.append(32);
	list2.append(60);
	list2.print();

	List list3(ListUtility::sortedMergeRecursion(list1.getHead(),list2.getHead()));

	list3.print();

	// bool identical=ListUtility::areIdentical(list1.getHead(),list2.getHead());

	// if(identical){
	// 	cout<<"lists are identical"<<endl;
	// }else{
	// 	cout<<"lists are not identical"<<endl;
	// }

	return 0;
}