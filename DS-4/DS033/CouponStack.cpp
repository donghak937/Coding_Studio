#include <iostream>
#include "CouponStack.h"
using namespace std;

PriceStack :: PriceStack(int size){
    maxSize = size;
    S = new Price[maxSize];
    top = 0;
} 
PriceStack ::  ~PriceStack() {};           // Destructor to remove from memory 
void PriceStack :: push(Price& s){
    S[top] = s;
    top++;
}

Price PriceStack :: pop(){
    top--;
    return S[top];
}
bool PriceStack ::  isFull(){
    if (top == maxSize) return true;
    else return false;
}
bool PriceStack ::  isEmpty(){
    if (top == 0) return true;
    else return false;
}
void PriceStack :: print(){
    for(int i = 0; i < top; i++){
        cout << S[i].ranking << " " << S[i].gift << endl; 
    }
}
void PriceStack :: printr(){
    Price a;
    while(isEmpty() == false){
        a = pop();
        cout << a.ranking << " " << a.gift << endl; 
    }
}
