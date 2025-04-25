#include "queueInt.h"
#include <iostream>
using namespace std;

int main(){
    int size;
    string act;
    elem a;
    cin >> size;
    MyQueueInt queue(size+1);

    while (true) {
        cin >> act;
        if (act == "en"){
            cin >> a.num;
            queue.enqueue(a);
        }
        else if (act == "de"){
            queue.dequeue();
        }
        else if (act == "front"){
            cout << "=> " << queue.bottom().num << endl;
        }
        else if (act == "rear"){
            cout << "=> " << queue.top().num << endl;
        }
        else if (act == "size"){
            cout << "=> " << queue.sizeOfQueue() << endl;
        }
        else if (act == "empty"){
            if(queue.isEmpty()) cout << "=> " << "1" << endl;
            else cout << "=> " << "0" << endl;
        }
        else if (act == "print"){
            queue.printDetail();
        }
        else if (act == "q"){
            cout << "bye!";
            break;
        }
    }
    

}