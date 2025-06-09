#include <iostream>
#include <list>

using namespace std;

int comp(int a, int b){
    return a > b;
}

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
    a.sort(comp);
    b.sort(comp);
    a.merge(b);
    a.sort(comp);

    p = a.begin();

    for(p; p != a.end(); p++){
        cout << *p << " ";
    }
}