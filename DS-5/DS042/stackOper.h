#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class MyStackOperList {
private:
    int size;       // size of the stack
    Node* top;      // top element

public:
    MyStackOperList();    // constructor to make the stack 
    ~MyStackOperList();   // Destructor to remove from memory 
    void push(int x);   // push function for inserting an element at the top of stack
    int pop();          // pop function for deleting the topmost element
    int isEmpty();      // check either stack is empty or not
    int getNodeCnt(); //count nodes
    void clear();
};