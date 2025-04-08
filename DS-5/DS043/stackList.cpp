#include "stackList.h"
#include <iostream>
using namespace std;

MyStackList::MyStackList() {
    top = nullptr; // intially set top of the Stack as nullptr;
    size = 0;
}

MyStackList::~MyStackList() {
    Node* p = top;
    while (top) {
        delete p;
        top = top->next;
        p = top;
    }
}

void MyStackList::push(char x) {
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

char MyStackList::pop() {
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

bool MyStackList::isFull() {
    Node* p = new Node;
    int r = p ? 0 : 1;
    delete p;
    return r;
}

bool MyStackList::isEmpty() {
    return top ? 0 : 1;
}

void MyStackList::display() {
    Node* n;

    if (isEmpty()) {
        cout << "Stack is Empty" << endl;
        return;
    }

    for (n = top; n != NULL; n = n->next) {
        cout << n->data;
        if (n->next == NULL) break;
        cout << " -> ";
    }
    if (getNodeCnt() == 1) cout << " (" << getNodeCnt() << " node" << ")\n";
    else cout << " (" << getNodeCnt() << " nodes" << ")\n";

}

char MyStackList::stackTop() {
    if (top)
        return top->data;
    else
        return -1;
}

int MyStackList::getNodeCnt() {
    Node* n;
    int count = 0;
    for (n = top; n != NULL; n = n->next) {
        count++;
    }
    return count;
}