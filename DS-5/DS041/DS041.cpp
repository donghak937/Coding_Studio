#include "stackIntList.h"
#include <iostream>
using namespace std;

int main() {

    MyStackIntList myStack;
    string whatTodo("");
    int numToPut = 0;

    while (whatTodo != "q") {

        cin >> whatTodo;

        if (whatTodo == "push") {
            cin >> numToPut;
            myStack.push(numToPut);
        }
        else if (whatTodo == "pop") myStack.pop();

        else if (whatTodo == "count") cout << myStack.getNodeCnt() << endl;

        else if (whatTodo == "print") myStack.display();

        else if (whatTodo == "peek") {
            if (myStack.stackTop() == -1) cout << "Stack is Empty";
            else cout << myStack.stackTop() << endl;
        }

        else if (whatTodo == "clear") {
            int size = myStack.getNodeCnt();
            for (int i = 0; i < size; i++) {
                myStack.pop();
            }
        }

        else {
            cout << "Bye!";
            break;
        }

    }

    return 0;
}