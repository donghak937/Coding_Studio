#include "stackOper.h"
#include <iostream>
using namespace std;

MyStackOperList::MyStackOperList() {
    top = nullptr; // intially set top of the Stack as nullptr;
    size = 0;
}

MyStackOperList::~MyStackOperList() {
    Node* p = top;
    while (top) {
        delete p;
        top = top->next;
        p = top;
    }
}

void MyStackOperList::push(int x) {
    Node* p = new Node;
    if (p == nullptr) {
        cout << "Stack Overflow!" << endl;
    }
    else {
        p->data = x;
        p->next = top;
        top = p;
        size++;
    }
}

int MyStackOperList::pop() {
    Node* p = top;
    int x = -1;
    if (p == nullptr) {
        cout << "Stack Underflow!" << endl;
    }
    else {
        x = p->data;
        top = top->next;
        delete p;
        size--;
    }
    return x;
}

int MyStackOperList::isEmpty() {
    return top ? 0 : 1;
}

int MyStackOperList::getNodeCnt() {
    Node* n;
    int count = 0;
    for (n = top; n != NULL; n = n->next) {
        count++;
    }
    return count;
}
void MyStackOperList::clear() {
    while (!isEmpty()) {
        pop();
    }
}