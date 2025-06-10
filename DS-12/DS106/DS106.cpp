#include <iostream>
#include "Heap.h"

using namespace std;

int main (){
    int size;
    int input = 1;
    MinHeap h;
    bool isExit = false;
    while (true)
    {
        cout << "1. Array to minHeap 2.insert 3.delete 4.print 0.quit > ";
        cin >> input;

        switch (input)
        {
        case 1:
            h.arrayEnter();
            cout << "minHeap => ";
            h.printHeap();
            break;
        case 2:
            int insertd;
            cin >> insertd;
            h.insertKey(insertd);
            cout << "minHeap => ";
            h.printHeap();
            break;
        case 3:
            cout << "min Value : " << h.deleteKey() << endl;
            cout << "minHeap => ";
            h.printHeap();
            break;
        case 4:
            h.printHeap();
            break;
        case 0:
            isExit = true;
            break;
        }
        if (isExit) break;
    }
    cout << "bye!";
    

}