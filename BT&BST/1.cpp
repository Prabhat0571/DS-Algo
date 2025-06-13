#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left; // data members
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree()
{
    cout << "enter the value: ";
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    cout << "for left ka data: " << root->data << endl;
    root->left = createTree();
    cout << "for right ka data: " << root->data << endl;
    root->right = createTree();

    return root;
}

void preOrder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // NLR

    // N
    cout << "current node is: " << root->data << endl;
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

void inOrder(Node*root){  //LNR
if (root == NULL)
    {
        return;
    }

    //LNR
    inOrder(root->left);
    cout<<"current node is: "<<root->data<<endl;
    inOrder(root->right);
}

void postOrder(Node*root){  //LRN
    if (root == NULL)
    {
        return;
    }
  //LRN
  postOrder(root->left);
  postOrder(root->right);
  cout<<"current node is: "<<root->data<<endl;
}

void bfs(Node*root){

    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*front = q.front(); //pehla element nikal lo or pop kardo
        q.pop();

        if(front==NULL){
            cout<<endl; 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<"element on the front is: "<<front->data<<endl;
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }

        }
    }
}

int main()
{

    Node *solution = createTree();
    // cout << "root node is: " << solution->data;
 
    // cout<<"Pre-Order Traversal is: ";
    // preOrder(solution);
    // cout<<endl; 

    // cout<<"in-Order Traversal is: ";
    // inOrder(solution);
    // cout<<endl; 

    // cout<<"post-Order Traversal is: ";
    // postOrder(solution);
    // cout<<endl;
    
    bfs(solution);
}

