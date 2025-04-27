#include "MyCircularQueue.h"
#include "Students.h"
#include <iostream>
#include <fstream>
using namespace std;

//Student Methods
Student::Student(string names, double scores) {
    name = names;
    score = scores;
}
Student:: ~Student() {}

string Student::getName() {
    return name;
}
double Student::getScore() {
    return score;
}

//-----------------------------------------------------------//
//MyCircularQueue Methods
MyCircularQueue::MyCircularQueue() {
    rear = front = -1;
}
MyCircularQueue::~MyCircularQueue() {

}

void MyCircularQueue::enqueue(Student &x) {
    if (isFull()) {
        cout << "=> Queue is full!" << endl;
    }
    else {
        rear = (rear + 1) % size; // increament the rear and then insert the value in the queue
        Q[rear] = &x; // insertion of the element.
    }
}

Student MyCircularQueue::dequeue() {
    Student a("1", 1);
    if (isEmpty()) {
        return a;
    }
    else
    {
        front = (front + 1) % size; // increment the front and take out the element 
        return *Q[front];
    }
}

bool MyCircularQueue::isFull() {
    if ((rear + 1) % size == front) {
        return true;
    }
    return false;
}

bool MyCircularQueue::isEmpty() {
    if (front == rear) {
        return true;
    }
    return false;
}

void MyCircularQueue::loadData(string filename) {
    double max = 0;
    string name;
    double score;
    ifstream file(filename);
    while (!file.eof()) {
        if (file.eof()) break;
        file >> score >> name;
        Student* a = new Student(name, score);
        if (a->getScore() > max) {
            max = a->getScore();
            clear();
            enqueue(*a);
        }
        else if (a->getScore() == max) {
            enqueue(*a);
        }
    }
    file.close();
}

void MyCircularQueue::clear() {
    while (!isEmpty()) {
        dequeue();
    }
}

void MyCircularQueue::display() {
    Student a("", 0);
    cout << "Highest GPA = " << Q[front+1 % size]->getScore() << endl;
    while (!isEmpty()) {
        a = dequeue();
        cout << a.getName() << " " << a.getScore() << endl;
    }
}