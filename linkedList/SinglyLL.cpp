#include<iostream>
using namespace std;
class node{
public: 
    int data;
    node* next;

    node(){
        this->next=NULL;
    }
    node(int data){
       this->data=data;
       this->next=NULL;
    }


};

void insertAtHead(node* &head, int data){
     node* newnode=new node(data);
     newnode->next=head;
     head=newnode;
}

void insertAtTail(node* &head, node* &tail, int data){
 if(head==NULL){
      node*newnode=new node(data);
      head=newnode;
      tail=newnode;
 }
    else{
    node*newnode=new node(data);
    tail->next=newnode;
    tail=newnode;
    }
}

void insertAtPosition(node*head, node*tail, int data, int position){
    node*newnode= new node(data);
    //trasverse to the postion where you want to insert
    node* prev=NULL;
    node*curr=head;
    while(position!=1){ //jbtk position one ni hojati
        prev=curr; //prev ko aage lekr aao
        curr=curr->next; // curr ko aage lekr aao
        position--; //postion ki value ko kam krte jao
    }
    prev->next=newnode;
    newnode->next=curr;

}

void PrintLL(node* head){
   node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"=>"; //temp ka data print krdo
        temp=temp->next; //temp ko aage bdha do 
    }
    cout<<endl;
}  
 int getlength(node*head){
    int length=0;
    node*temp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;
 }
void deleteNode(node*head, node*tail,int position){
  int len= getlength(head);

  if(position==1){
     node*temp= head;
     head=temp->next;
     temp->next=NULL;
     delete temp;
  }

  else if(position==len){ 
   node*prev=head;
   while(prev->next!=NULL){
       prev=prev->next;
   }
   prev->next=NULL;
   delete tail;
   tail=prev;
  }

  else{ //position anywhere between head and tail
   
  }

}

int main(){

    node* head= NULL;
    node* tail=NULL;
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);
  
    // node* temp = head;
    // while (temp->next != NULL) {
    //    temp = temp->next; //reaching to the end of the linkedlist after inserting new elements
    //   }
    //   tail = temp;
    // insertAtTail(head,tail,50);
    // insertAtPosition(head,tail,50,2);
    deleteNode(head,tail,1);
    
    PrintLL(head);
    cout<<"the length of linkedlist is: "<<getlength(head)<<endl;



}