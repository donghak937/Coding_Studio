#include "queueInt.h"
#include <iostream>
using namespace std;

int main(){
    MyQueueInt queue(10);
    elem x;
    cout <<"===== Dequeue x 1 =====" << endl;
    queue.dequeue();
    queue.printDetail();

    cout <<"===== Enqueue x 7 (10 ~ 70) =====" << endl;
    for(int i = 10; i < 80; i += 10){
        x.num = i;
        queue.enqueue(x);
    }
    queue.printDetail();
    cout <<"===== Dequeue x 3 =====" << endl;
    for(int i = 10; i < 40; i += 10){
        x.num = i;
        queue.dequeue();
    }
    queue.printDetail();
    cout <<"===== Enqueue x 6 (10 ~ 60) =====" << endl;
    for(int i = 10; i < 70; i += 10){
        x.num = i;
        queue.enqueue(x);
    }
    queue.printDetail();
}