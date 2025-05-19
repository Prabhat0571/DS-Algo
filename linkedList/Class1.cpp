// #include<iostream>
// using namespace std;

// class Node{
//     public: 
//     int data;
//     Node * next; //node create hogai

//     Node(){
//         this->next=NULL;
//     }

//     Node(int data){
//          this->data=data;
//          this->next=NULL;
//     } 
// };

//  void insertNodeAtHead(Node* &Head, int data){
//     Node* newnode= new Node(data);
//      newnode->next=Head;
//      Head=newnode;

//  } 

//  void insertNodeAtTail(Node* &Tail, int data){
//    //step1 hai naya node bnao
//    Node* Newnode= new Node(data);
//    //step2 hai naye node ko tail bnao
//    Tail->next=Newnode;
//    Tail=Newnode;


//  }

// // void PrintLL(Node* Head){
//     Node*temp= Head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;

// }

// int getLength(Node* Head){
//     Node*temp = Head;
//     int length=0;
//     while(temp!=NULL){
//         length++;
//         temp=temp->next;
//     }
//      return length;
// }

// void insertAtPosition(){
    
// }


// // int main(){
 
// //      Node* first= new Node(10);
// //      Node* Second= new Node(20);
// //      Node* Third= new Node(30); // object ki madad se node banaliye
//      Node* fourth= new Node(40);
//      Node* fifth= new Node(50);
    
//      first->next= Second;
//      Second->next= Third;
//      Third->next= fourth;
//      fourth->next= fifth;
//    //LL create ho chuki h
   
//     Node* Head = first;
//     Node* Tail=fifth;
//      insertNodeAtHead(Head,500);
//      insertNodeAtTail(Tail,1000);
//     PrintLL(Head);
//    cout<< getLength(Head);


// }