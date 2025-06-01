#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int>&st, int element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int temp= st.top();
    st.pop();
    insertAtBottom(st,element);

    //backtrack
    st.push(temp);

}

void revStack(stack<int>&st){
    if(st.empty()){
        return;
    }
   
    int temp=st.top();
    st.pop();

    revStack(st);

    insertAtBottom(st,temp);
}

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    int element=50;
  
    revStack(st);
    while(!st.empty()){
      cout<<st.top()<<endl;
      st.pop();
    }
    
}