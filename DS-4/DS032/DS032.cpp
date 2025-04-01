#include "stackInt.h"
#include <iostream>
using namespace std;

int main() {

    int size;
    cin >> size;
    MyStackInt myStack(size);
    string whatTodo("");
    int numToPut = 0;

    while (whatTodo != "print"){

        cin >> whatTodo;

        if (whatTodo == "push") {
            cin >> numToPut;
            //cout << numToPut;
            myStack.push(numToPut);
        }
        else if (whatTodo == "pop") myStack.pop();
        else {
            myStack.display();
            break;
        }

    }


    return 0;
}