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