#include <iostream>
using namespace std;


struct elem
{
    int num;
};


class MyStackInt {
private:
    int size;   // size of the Stack
    int top;    // index of top element
    elem* S;     // Stack Pointer (int array) 
public:
    MyStackInt(int size);    // constructor to make the Stack with size 
    ~MyStackInt();           // Destructor to remove from memory 
    void push(elem& x);   // push function for inserting an element at the top of Stack
    elem* pop();          // pop function for deleting the topmost element
    int isFull();       // check either the Stack is full or not
    int isEmpty();      // check either Stack is empty or not
    void display();     // function for displaying the Stack 
};

MyStackInt::MyStackInt(int size) {
    S = new elem[size]; // creating the size of the Stack in memory 
    this->size = size;
    top = 0; // intially set top of the Stack as 0;
}

MyStackInt::~MyStackInt() {
    delete[] S; // free the memory 
}

void MyStackInt::push(elem& x) {
    if (isFull()) {
        cout << "Stack Overflow!" << endl;
    }
    else {

        S[top] = x; // and push the element to Stack 
        top++; // increment top
    }
}

elem* MyStackInt::pop() {
    elem* x{}; // initially setting x as 0
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
    }
    else {
        top--; // decreament the size of the Stack
        x = &S[top]; // take out the element 

    }
    return x;
}

int MyStackInt::isFull() {
    if (top == size - 1) {
        return 1;
    }
    return 0;
}

int MyStackInt::isEmpty() {
    if (top == 0) {
        return 1;
    }
    return 0;
}

void MyStackInt::display() {
    for (int i = top - 1; i >= 0; i--) {
        cout << S[i].num << endl;
    }
}
