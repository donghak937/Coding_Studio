#include <iostream>
#include <list>

using namespace std;

int main (){
    list<int> a;
    list<int> b;
    list<int> :: iterator p;

    int aSize, bSize;
    cin >> aSize >> bSize;
    int tmp;

    for (int i = 0; i < aSize; i++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < bSize; i++){
        cin >> tmp;
        b.push_back(tmp);
    }
    a.sort();
    b.sort();
    a.merge(b);

    p = a.begin();

    for(p; p != b.end(); p++){
        cout << *p << " ";
    }
}