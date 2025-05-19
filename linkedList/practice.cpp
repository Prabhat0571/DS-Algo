#include<iostream>
using namespace std;
class node{
    public: 
    node* next;
    int data;
     
    node(){
        this->next=NULL;
    }
    node(int data){
        this->next=NULL;
        this->data=data;  
    }
};

void insertHead(node* &head, int data){
    node *newnode= new node(data); //step1 node bnao
    newnode->next=head;
    head=newnode;

}

void insertTail(node*&head, node*&tail, int data){
    if(head==NULL){
        node*newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else{
         node*newnode= new node(data);
         tail->next=newnode;
         tail=newnode;  
     } }




void insertPosition(node*&head, int data, int position){
    node* prev=NULL;
    node*curr= head;
    while(position!=1){
        prev=prev->next;
        curr=curr->next;
        position--;
    }
    node*newnode= new node(data);
    prev->next=newnode;
    newnode->next=curr;
}


void printLL(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"=>";
        temp=temp->next;
    }
  cout<<endl;
}

int getlength(node*head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;

}

int main(){

    node*head=NULL;
    node*tail=NULL;
    insertHead(head,30);
    insertHead(head,20);
    insertHead(head,10);
   //tail tak ponch ja
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    tail=temp;
    insertTail(head,tail,33);
    insertTail(head,tail,31);
    insertPosition(head,555,2);
    

    printLL(head);
    cout<<"the length is:" <<getlength(head);
}