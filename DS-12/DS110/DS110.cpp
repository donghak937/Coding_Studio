#include <queue>

#include <iostream>

using namespace std;

int main () {
    queue<int> a;
    int size;
    int count = 1;
    cin >> size;
    for(int i = 1; i <= size; i++){
        a.push(i);
    }
    while (a.size() != 1)
    {
        if (count % 2 == 1){
            a.pop();
            count++;
        }
        else{
            count++;
        }
    }
    cout << a.front();
}
