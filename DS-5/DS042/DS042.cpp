#include "stackOper.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int answer = 0;
    int a = 0;
    int num1, num2;
    MyStackOperList myStack;
    bool exError = false;
    string num;
    ifstream file("input.txt");
    while (!file.eof()) {
        if (file.eof()) break;
        file >> num;

        cout << num << " ";
        if (num[0] == '#') {
            myStack.push(stoi(num.substr(1)));
        }
        else if (num == "+" || num == "-" || num == "*" || num == "/") {
            if (myStack.getNodeCnt() < 2) {
                cout << "=> Expression Error !!!\n";
            }
            else if (num == "+") {
                myStack.push(myStack.pop() + myStack.pop());
            }
            else if (num == "-") {
                num1 = myStack.pop();
                num2 = myStack.pop();
                myStack.push(num2 - num1);
            }
            else if (num == "*") {
                myStack.push(myStack.pop() * myStack.pop());
            }
            else if (num == "/") {
                num1 = myStack.pop();
                num2 = myStack.pop();
                if (num1 == 0) {
                    cout << "\n=> Division by 0\n";
                    myStack.push(0);
                    exError = true;
                }
                else {
                    myStack.push(num2 / num1);
                }
            }
        }
        else if (num == "=") {
            if (exError) {
                cout << "\n=> Expression Error !!!\n";
                exError = false;
                myStack.clear();
            }
            else if (myStack.getNodeCnt() > 1) {
                cout << "\n=> Too many operands !!!\n";
                myStack.clear();
            }
            else cout << myStack.pop() << endl;

        }
        else {
            exError = true;
        }
        
    }
    if (exError) {
        cout << "=> Expression Error !!!\n";
    }

    file.close();
}