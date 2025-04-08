#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class MyStackList {
private:
    int size;       // size of the stack
    Node* top;      // top element

public:
    MyStackList();    // constructor to make the stack 
    ~MyStackList();   // Destructor to remove from memory 
    void push(char x);   // push function for inserting an element at the top of stack
    char pop();          // pop function for deleting the topmost element
    bool isFull();       // check either the stack is full or not
    bool isEmpty();      // check either stack is empty or not
    void display();     // function for displaying the stack 
    char stackTop();     // top function for checking the topmost element present in the stack 
    int getNodeCnt(); //count nodes
};