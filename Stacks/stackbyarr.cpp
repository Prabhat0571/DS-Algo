#include <iostream>
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){

        if (top2 - top1 == 1)
        {
            cout << "overflow";
            return;
        }
        else
        {
           
            top1++;
             arr[top1] = data;
        }
    }
      
    void push2(int data){
        if(top2-top1==1){
            cout<<"overflow";
            return;
        }
        else{
            
            top2--;
            arr[top2]=data;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"underflow";
            return;
        }
        else{
        arr[top1]=0;
        top1--;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"underflow";
            return;
        }
        else{
        arr[top2]=0;
        top2++;
        }
    }

    void print(){

        // cout<<"top1 is currently: "<<top1<<endl;
        // cout<<"top2 is currently: "<<top2<<endl;

        for(int i=0; i<size; i++){
            cout<<arr[i]<<endl;
        }

    }

};

int main()
{
    Stack st(4);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push2(40);
    st.push1(50);
    st.print();

}