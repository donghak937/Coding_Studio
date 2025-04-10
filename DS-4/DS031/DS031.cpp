#include "stackInt.h"
#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;
    MyStackInt myStack(size);
    string whatTodo("");
    elem a;
    int numToPut = 0;

    while (whatTodo != "print") {

        cin >> whatTodo;

        if (whatTodo == "push") {
            cin >> a.num;
            //cout << numToPut;
            myStack.push(a);
        }
        else if (whatTodo == "pop") myStack.pop();
        else {
            myStack.display();
            break;
        }

    }


    return 0;
}