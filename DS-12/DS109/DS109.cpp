#include <stack>
#include <iostream>
using namespace std;

int main(){
    string a;
    stack<char> s;
    cin >> a;
    for(int i = 0; i < a.length(); i++){
        if (a[i] == s.top()){
            s.pop();
        }
        else {
            s.push(a[i]);
        }
    }
    while( !s.empty()){
        cout << s.top();
        s.pop();
    }
}