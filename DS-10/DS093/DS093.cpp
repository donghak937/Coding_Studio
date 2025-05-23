#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int size;
    vector<string> a;
    string word;
    cin >> size;
    for (int i = 0; i < size; i++){
        cin >> word;
        a.push_back(word);
    }
        sort(a.begin(), a.end(), [](string a, string b){ 
        return a.length() < b.length(); 
    });

    cout << endl;
    
    for (int i = 0; i < size; i++){
        if(find(a.begin() + i+1, a.end(), a[i]) == a.end()) {
            cout << a[i] << endl;
        }
    }

    return 0;
}