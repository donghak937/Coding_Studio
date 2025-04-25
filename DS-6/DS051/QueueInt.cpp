#include "queueInt.h"
#include <iostream>
using namespace std;

MyQueueInt::MyQueueInt(int size) { 
	front = rear = -1;
	this->size = size;		
	Q = new elem[size];					//Memory is allocated for the Queue in the HEAP
}

MyQueueInt::~MyQueueInt() {
    delete[] Q; // free the memory 
}

void MyQueueInt::enqueue(elem x) {
    if (isFull()) { 
        cout << "=> Queue is ful!" << endl; 
    }
    else {  
		rear = (rear+1) % size; // increament the rear and then insert the value in the queue
		Q[rear] = x; // insertion of the element.
    }
}

elem MyQueueInt::dequeue() { 
    elem x; // initially setting x as -1 
    if (isEmpty()) { 
		cout << "=> Queue is empty!" << endl;
    }
	else
	{
		front = (front+1) % size; // increment the front and take out the element 
		x = Q[front];
	}
	return x; // return the deleted value 
}

bool MyQueueInt::isFull(){ 
    if ((rear+1) % size == front) { 
        return true;
    }
    return false;
}

bool MyQueueInt::isEmpty()  {
    if (front == rear){
        return true;
    }
    return false;
}

void MyQueueInt::printDetail() const{ 
    cout << "Size : " << sizeOfQueue() << endl;
    cout << "Queue : ";
    for(int i = front+1; i != (rear+1) % size; i = (i + 1) % size){
        cout << "["<<Q[i].num<<"]";
    }
    cout << endl << "index : ";
    for(int i = front+1; i != (rear+1) % size; i = (i + 1) % size){
        cout << (i+1) % size << " ";
    }
    cout << endl;
    cout << "front : " << front+1 << ", " << "rear : " <<  rear+1 << endl; 
}
int MyQueueInt::sizeOfQueue() const{
    int count = 0;
    for(int i = front+1; i != (rear+1) % size; i = (i + 1) % size){
        count++;
    }
    return count;
}