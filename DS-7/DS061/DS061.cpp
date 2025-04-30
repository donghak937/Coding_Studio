#include "queueIntList.h"
#include <iostream>
using namespace std;

int main() {

    MyQueueIntList queue;
    int input;
    bool check = true;

    while (check) {
        cout << "1.enqueue 2.dequeue 3.showfront 4.showrear 5.displayQueue 6.exit > ";
        cin >> input;
        switch (input) {
            case 1:
                cout << "Enter a Value: ";
                cin >> input;
                queue.enqueue(input);
                cout << endl;
                break;
            case 2:
                queue.dequeue();
                cout << endl;
                break;
            case 3:
                cout << "element at front : " << queue.peek() << endl;
                cout << endl;

                break;
            case 4:
                cout << "element at rear : " << queue.back() << endl;
                cout << endl;

                break;
            case 5:
                queue.printAll();
                cout << endl;
                break;
            case 6:
                cout << "bye!";
                check = false;
                break;
            
        }
    }
    

    return 0;
}