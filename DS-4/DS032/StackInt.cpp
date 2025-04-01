#include "StackInt.h"
#include "GPAStudent.h"
#include <iostream>
using namespace std;


MyStackInt::MyStackInt() { 
    S = new Student[100]; // creating the size of the Stack in memory 
    top = 0; // intially set top of the Stack as 0;
}

MyStackInt::~MyStackInt() {
    delete[] S; // free the memory 
}

void MyStackInt::push(Student &s) {
    if (isFull()) { 
        cout << "Stack Overflow!" << endl; 
    }
    else { 
        string names;
        double scores;

        S[top] = Student(names, scores);
        top++; // increment top
    }
}

int MyStackInt::pop() { 
    int x = 0; // initially setting x as 0
    if (isEmpty()) { 
        cout << "Stack Underflow!" << endl; 
    }
    else {
        top--; // decreament the size of the Stack
        x = S[top]; // take out the element 
         
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
    for (int i = top -1; i >= 0; i--) {
        cout << S[i] << endl;
    }
}

int MyStackInt::stackTop() {
    if (isEmpty()) {
        return -1;
    }
    return S[top];
}