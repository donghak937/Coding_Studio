#include "stackList.h"
#include <iostream>
using namespace std;

int main() {

    MyStackList leftStack;
    MyStackList rightStack;
    string whatTodo("");
    int i = 0;
    string answer = "";
    bool right = true;
    bool left = false;
    while (true){
        cin >> whatTodo;
        if (whatTodo == "q") break;
        while(i != whatTodo.size()){

            if (whatTodo[i] == '>'){
                right = true;
                left = false;
                if (right) {
                    if (leftStack.isEmpty() == false) {
                        rightStack.push(leftStack.pop());
                    }

                }

            }
            else if (whatTodo[i] == '<' ){
                right = false;
                left = true;
                if (rightStack.isEmpty() == false) {
                    leftStack.push(rightStack.pop());
                    right = true;
                    left = false;
                }
                else {
                    right = true;
                    left = false;
                }
            }
            else rightStack.push(whatTodo[i]);
            i++;
        }
        while (!(leftStack.isEmpty())) {
            answer += leftStack.pop();
        }
        while(!(rightStack.isEmpty())){
            answer += rightStack.pop();
        }
        
        for (int k = 0; k < answer.size(); k++) {
            rightStack.push(answer[k]);
        }
        answer = "";
        while (!(rightStack.isEmpty())) {
            answer += rightStack.pop();
        }
        cout << "=> " << answer << endl;
        answer = "";
        i = 0;
        

    }
    
    return 0;
}