#include <iostream>
#include <string>
#define SIZE 3
using namespace std;


string isPrefix(string* list);

int main() {

    string* words = new string[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin >> words[i];
    }
    cout << isPrefix(words);
}

string isPrefix(string* list) {
    int min = 0;
    string prefix = "";
    int count = 0;
    for (int i = 1; i < SIZE; i++) {
        if (list[i].length() < list[min].length()) min = i;
    }
    for (int i = 0; i < list[min].length(); i++) {
        for (int j = 0; j < list[min].length() - i; j++) {
            prefix += list[min][j];
        }
        for (int j = 0; j < SIZE; j++) {
            if (list[j].find(prefix) == 0) count++;
        }
        if (count == SIZE) return prefix;
        count = 0;
        prefix = "";
    }
    return "?";
}