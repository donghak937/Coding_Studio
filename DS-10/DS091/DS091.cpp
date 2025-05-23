#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<char> lefts;
    stack<char> rights;

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
                    if (lefts.empty() == false) {
                        rights.push(lefts.top());
                        lefts.pop();
                    }

                }

            }
            else if (whatTodo[i] == '<' ){
                right = false;
                left = true;
                if (rights.empty() == false) {
                    lefts.push(rights.top());
                    rights.pop();
                    right = true;
                    left = false;
                }
                else {
                    right = true;
                    left = false;
                }
            }
            else rights.push(whatTodo[i]);
            i++;
        }
        while (!(lefts.empty())) {
            answer += lefts.top();
            lefts.pop();
        }
        while(!(rights.empty())){
            answer += rights.top();
            rights.pop();
        }
        
        for (int k = 0; k < answer.size(); k++) {
            rights.push(answer[k]);
        }
        answer = "";
        while (!(rights.empty())) {
            answer += rights.top();
            rights.pop();
        }
        cout << "=> " << answer << endl;
        answer = "";
        i = 0;
        

    }
    
    return 0;
}