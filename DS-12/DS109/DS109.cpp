#include <stack>
#include <iostream>
using namespace std;

int main(){
    string a;
    stack<char> s;

    stack<char> realWord;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if (!s.empty() && a[i] == s.top()){
            s.pop();
        }
        else {
            s.push(a[i]);
        }
    }
    while(!s.empty()){
        realWord.push(s.top());
        s.pop();
    }
    while(!realWord.empty()){
        cout << realWord.top();
        realWord.pop();
    }
}