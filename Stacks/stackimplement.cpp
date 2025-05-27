#include<iostream>
using namespace std;

class Stack {
public:
    int *arr;
    int size;
    int top;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if (top == size - 1) {
            cout << "Overflow: Cannot push " << data << endl;
        } else {
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Underflow: Stack is empty" << endl;
        } else {
            top--;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    int noOfElements() {
        return top + 1;
    }

    int topElement() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;  // Or handle appropriately
        }
        return arr[top];
    }

   
};

int main() {
    Stack st(8);// 8 size ka dabba chaiye
    st.push(12);
    st.push(434);
    st.push(1223);
    cout << "Top element: " << st.topElement() << endl;

    st.pop();
    cout << "Top element after pop: " << st.topElement() << endl;

}
