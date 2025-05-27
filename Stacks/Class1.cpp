#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(12);
    st.push(132);
    st.push(13111);
    cout<<"size of the stack is: "<<st.size();
    st.pop();
     cout<<"size of the stack is: "<<st.size();
    cout<<st.top();


}  