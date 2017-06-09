#include <iostream>
using namespace std;
class Node{
    friend class List;
    int data;
    Node* link; //pointer to next node
    //constructor
    public:
    Node(int data,Node* link=NULL){
        this->data= data;
        this->link= link;
    }
};
class List{
    Node* head;
    public:
    List(){
        head=NULL;
    }
    Node* push(int data);
    Node* append(int data);
    Node* insertAt(int location,int data);
    void print() const;
};

Node* List::push(int data){
    Node* temp=head;
    Node* newNode=new Node(data,temp);
    head=newNode;
    return newNode;
}

Node* List::append(int data){
    Node* newNode=new Node(data);
    Node* temp=head;
    if(temp==NULL){
        head=newNode;
    }else{
        while(temp->link!=NULL){
            temp=temp->link;
        }
        temp->link=newNode;
    }
    return newNode;
}

Node* List::insertAt(int location,int data){
    Node* temp=head;
    Node* prev= NULL;
    Node* newNode=new Node(data,temp);
    for(int i=0;i<=location && temp!=NULL;i++){
        prev=temp;
        temp = temp->link;
    }
    if(temp==NULL){
        return NULL;
    }
    prev->link=newNode;
    newNode->link=temp;
    
    return newNode;
}

void List::print() const{
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main(){
    List list;
    list.append(10);
    list.append(20);
    list.push(30);
    list.insertAt(2, 22);
    list.print();
}