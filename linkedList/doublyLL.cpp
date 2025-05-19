#include<iostream>
using namespace std;
class node{
    public:
    int data; 
    node* next;
    node* prev;

    node(){
       this->prev=NULL;
       this->next=NULL;
    }

    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
     
    }
};

void PrintLL(node*&head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int getlen(node*&head){
    node*temp=head;
    int len=0;
    while(temp!=NULL){
      len++;
      temp=temp->next;
    }
    return len;
}

void insertHead(node*&head, node*&tail, int data){
    if(head==NULL){
        node* newnode = new node(data);
        head=newnode;
        tail=newnode;

    }
    else{
   node* newnode= new node(data);
   head->prev=newnode;
   newnode->next=head;
   head=newnode;
    }
}

void insertTail(node*&head, node*&tail, int data){
       if(head==NULL){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
       }
       else{
        node*newnode= new node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
       }
}
void insertPos(node*&head, int position, int data){
    node*previous=NULL;
    node*current=head;
    node*newnode=new node(data);
    while(position!=1){
        
        previous=current;
        current=current->next;
        position--;
    }
   previous->next=newnode;
   newnode->prev=previous;
   current->prev=newnode;
   newnode->next=current;
}

int main(){
  
    node*head=NULL;
    node*tail=NULL;
    insertHead(head, tail, 30);
    insertHead(head, tail, 20);
    insertHead(head, tail, 10);
   insertTail(head,tail,1000);
   insertPos(head,3,3000);
   PrintLL(head);
    cout<<"the length of LL is: "<<getlen(head);


}