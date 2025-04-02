#include <iostream>
using namespace std;

typedef struct {
    int ranking = 0;
    string gift = "";
}Price;

class PriceStack {
private: 
    int top;    // index of top element
    int maxSize;
    Price* S;     // Stack Pointer (int array) 
public:
    PriceStack(int size);    // constructor to make the Stack with size 
    ~PriceStack();           // Destructor to remove from memory 
    void push(Price& s);   // push function for inserting an element at the top of Stack
    Price pop();          // pop function for deleting the topmost element
    bool isFull();       // check either the Stack is full or not
    bool isEmpty();      // check either Stack is empty or not
    void print();
    void printr();
};