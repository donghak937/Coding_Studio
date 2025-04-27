#include <iostream>
#include "Students.h"
#pragma once
using namespace std;

class MyCircularQueue {
private:
    int front;  // front is used for deletion 
    int rear;   // rear is used for insertion
    int size;   // size of the queue 
    Student* Q[100];
public:
    MyCircularQueue();
    ~MyCircularQueue();

    void enqueue(Student &x);   // enqueue function for inserting an element at the rear of Queue
    Student dequeue();          // dequeue function for deleting an element at the front of Queue
    bool isFull();       // check either the Queue is full or not
    bool isEmpty();      // check either Queue is empty or not      

    void display();
    void loadData(string filename);
    void clear();
};