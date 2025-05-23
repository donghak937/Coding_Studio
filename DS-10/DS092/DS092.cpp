#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int size;
    int count;
    int input;
    cin >> size;
    cin >> count;
    vector<int> a;

    for(int i = 0; i < size; i++){
        cin >> input;
        a.push_back(input);
    }
    make_heap(a.begin(), a.end());

    for(int i = 0; i < count-1; i++){
        pop_heap(a.begin(), a.end());
        a.pop_back();
        #ifdef check
        for(int i = 0; i < a.size(); i++){
            cout << a[i];
        }
        cout << endl;
        #endif
    }
    cout << a.front();

    

    return 0;
}