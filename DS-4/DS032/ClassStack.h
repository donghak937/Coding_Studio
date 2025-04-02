#include <iostream>
#include "Students.h"
#pragma once
using namespace std;

class ClassStack {
private: 
    int top;    // index of top element
    Student* S[100];     // Stack Pointer (int array) 
public:
    ClassStack();    // constructor to make the Stack with size 
    ~ClassStack();           // Destructor to remove from memory 
    void push(Student& s);   // push function for inserting an element at the top of Stack
    Student pop();          // pop function for deleting the topmost element
    int isFull();       // check either the Stack is full or not
    int isEmpty();      // check either Stack is empty or not
    void display();     // function for displaying the Stack 
    Student stackTop();     // top function for checking the topmost element present in the Stack 
    void loadData(string filename);
};