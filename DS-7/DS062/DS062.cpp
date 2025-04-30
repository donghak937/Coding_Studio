#include "queueIntList.h"
#include <iostream>
using namespace std;

int main() {

    MyQueueIntList queue;
    queue.enqueue(1);
    queue.enqueue(1);
    int input;
    cin >> input;
    for(int i = 0; i < input; i++){
        if (i == 0){
            cout << "1st : " << queue.peek() << endl;
        }
        else if (i == 1){
            cout << "2nd : " << queue.back() << endl;
        }
        else if (i == 2){
            cout << "3rd : " << queue.back() + queue.peek() << endl;
            queue.enqueue(queue.back() + queue.peek());
            queue.dequeue();
        }
        else {
            cout << i+1 << "rd : " << queue.back() + queue.peek() << endl;
            queue.enqueue(queue.back() + queue.peek());
            queue.dequeue();
        }
    }
    cout << "=> fibonacci(" << input << ") : " <<  queue.back();

    return 0;
}