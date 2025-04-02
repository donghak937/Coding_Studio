#include "CouponStack.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

    int size;
    cin >> size;
    PriceStack myStack(size);
    string whatTodo("");
    Price a;

    while (whatTodo != "print"){

        cin >> whatTodo;

        if (whatTodo == "+") {
            cin >> a.ranking;
            getline(cin, a.gift);
            if (myStack.isFull()){
                cout << "ÀÌ¹Ì °¡µæ Ã¡½À´Ï´Ù! " << endl;
            }
            else myStack.push(a);
        }
        else if (whatTodo == "-") {
            if (myStack.isEmpty()){
                cout << "ÀÌ¹Ì ÅÖÅÖ ºñ¾ú½À´Ï´Ù! " << endl;
            }
            else{
                a = myStack.pop();
                cout << a.ranking << "µî - " << a.gift << endl;
            }
        }

        else if (whatTodo == "A") myStack.print();

        else if (whatTodo == "C") myStack.printr();

        else if (whatTodo == "q") break;

    }


    return 0;
}