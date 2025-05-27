#include <iostream>
#include <vector>   // Required for std::vector
#include <stdexcept> // For potential use of exceptions

// Bring all names from the std namespace into the current scope.
// This means you don't have to write std::cout, std::vector, etc.
using namespace std;

// Class definition for Stack using std::vector
class Stack {
public:
    // The vector to store stack elements.
    // It will replace the raw array 'arr'.
    vector<int> data_store; // No std:: prefix needed

    // Stores the maximum capacity of the stack, similar to 'size' in your original code.
    int max_capacity;

    // Constructor
    // Initializes the stack with a maximum capacity.
    Stack(int capacity) {
        if (capacity <= 0) {
            // Handle invalid capacity, e.g., throw an error or set a default.
            // For simplicity, we'll print an error and default to a small capacity.
            cout << "Error: Capacity must be positive. Defaulting to capacity 10." << endl; // No std::
            this->max_capacity = 10;
        } else {
            this->max_capacity = capacity;
        }
        // We can reserve space in the vector for efficiency, though it's not strictly
        // necessary for correctness as vector will grow if needed (up to our check).
        // data_store.reserve(this->max_capacity); // Optional optimization
    }

    // Pushes an element onto the stack.
    void push(int data) {
        // Check for stack overflow: if the current number of elements
        // is already equal to the maximum capacity.
        if (data_store.size() >= max_capacity) {
            cout << "Stack overflow: Cannot push element " << data << ". Stack is full." << endl; // No std::
        } else {
            // std::vector::push_back adds the element to the end of the vector.
            // This effectively becomes the "top" of our stack.
            data_store.push_back(data);
            // No need to manually manage 'top' index.
        }
    }

    // Pops (removes) the top element from the stack.
    void pop() {
        // Check for stack underflow: if the stack is empty.
        // std::vector::empty() returns true if the vector has no elements.
        if (data_store.empty()) {
            cout << "Stack underflow: Cannot pop. Stack is empty." << endl; // No std::
        } else {
            // std::vector::pop_back removes the last element.
            data_store.pop_back();
            // No need to manually decrement 'top'.
        }
    }

    // Checks if the stack is empty.
    bool isEmpty() {
        // Returns true if the vector contains no elements, false otherwise.
        return data_store.empty();
    }

    // Returns the number of elements currently in the stack.
    int noOfElements() {
        // std::vector::size() returns the current number of elements.
        return data_store.size();
    }

    // Returns the top element of the stack without removing it.
    int topElement() {
        if (data_store.empty()) {
            cout << "Stack is empty: Cannot get top element." << endl; // No std::
            // Returning a special value like -1 or throwing an exception
            // is common practice for error handling.
            // For consistency with your original style, we'll print and return -1 (or an error code).
            // throw runtime_error("Stack is empty"); // Alternative using exceptions (no std:: needed if using namespace std)
            return -1; // Or some other indicator of an error/empty stack
        } else {
            // std::vector::back() returns a reference to the last element.
            return data_store.back();
        }
    }

    // Optional: Utility function to print the stack contents
    void printStack() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl; // No std::
            return;
        }
        cout << "Stack (top to bottom): "; // No std::
        // Iterate from end to beginning to print in top-to-bottom order
        for (int i = data_store.size() - 1; i >= 0; --i) {
            cout << data_store[i] << " "; // No std::
        }
        cout << endl; // No std::
    }
};

// Main function to demonstrate the Stack class
int main() {
    // Create a stack with a maximum capacity of 5
    cout << "Creating a stack with capacity 5." << endl; // No std::
    Stack st(5);

    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl; // Yes // No std::

    st.push(10);
    st.push(20);
    st.push(30);
    st.printStack(); // Stack (top to bottom): 30 20 10
    cout << "Top element: " << st.topElement() << endl;       // 30 // No std::
    cout << "Number of elements: " << st.noOfElements() << endl; // 3 // No std::

    st.push(40);
    st.push(50);
    st.printStack(); // Stack (top to bottom): 50 40 30 20 10
    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl; // No // No std::

    // Attempt to push when stack is full (overflow)
    cout << "Attempting to push 60..." << endl; // No std::
    st.push(60); // Stack overflow message

    cout << "Popping elements:" << endl; // No std::
    st.pop(); // Pops 50
    cout << "Top element after pop: " << st.topElement() << endl; // 40 // No std::
    st.printStack(); // Stack (top to bottom): 40 30 20 10

    st.pop(); // Pops 40
    st.pop(); // Pops 30
    st.pop(); // Pops 20
    st.pop(); // Pops 10
    st.printStack(); // Stack is empty.
    cout << "Is stack empty? " << (st.isEmpty() ? "Yes" : "No") << endl; // Yes // No std::

    // Attempt to pop when stack is empty (underflow)
    cout << "Attempting to pop from empty stack..." << endl; // No std::
    st.pop(); // Stack underflow message

    // Attempt to get top element when stack is empty
    cout << "Attempting to get top element from empty stack..." << endl; // No std::
    cout << "Top element: " << st.topElement() << endl; // Stack is empty message, returns -1 // No std::

    // Example with invalid capacity
    cout << "\nCreating a stack with capacity 0." << endl; // No std::
    Stack st_invalid(0); // Will print error and default capacity
    st_invalid.push(100);
    st_invalid.printStack();


    return 0;
}
