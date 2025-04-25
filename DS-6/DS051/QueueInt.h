#include <iostream>
using namespace std;

struct elem
{
    int num;
};


class MyQueueInt {
private: 
	int front;  // front is used for deletion 
	int rear;   // rear is used for insertion
	int size;   // size of the queue 
	elem* Q;     // dynamically allocated space for queue 
public:
    MyQueueInt(int size);    // constructor to make the Queue with size 
    ~MyQueueInt();           // Destructor to remove from memory 
    void enqueue(elem x);   // enqueue function for inserting an element at the rear of Queue
    elem dequeue();          // dequeue function for deleting an element at the front of Queue
    bool isFull();       // check either the Queue is full or not
    bool isEmpty();      // check either Queue is empty or not
    void printDetail() const;     // function for displaying the Queue 
    int sizeOfQueue() const;
};