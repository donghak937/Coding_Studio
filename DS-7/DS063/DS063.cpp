#include "queueIntList.h"
#include <iostream>
using namespace std;

int main() {

    MyQueueIntList Q1;
    MyQueueIntList Q2;

    int size;
    cin >> size;
    int num;

    for(int i = 0; i < size; i++){
        cin >> num;
        Q1.enqueue(num);
    }

    for(int i = 0; i < size; i++){
        cin >> num;
        Q2.enqueue(num);
    }
    
    for(int i = 0; i < size; i++){
        
    }

    return 0;
}