#include <iostream>
#include <string>
using namespace std;

string rid_of_first(string w);
string rid_of_last(string w);

int main() {

    string word;

    cin >> word;
    word = rid_of_first(word);
    word = rid_of_last(word);
    cout << word;
}

string rid_of_first(string w) {
    while (w.find_first_of("\t") != std::string::npos) {
        if (w[0] != '\t' && w[0] != ' ') return w;
        if (w.find_first_of("\t") != std::string::npos) {
            w.erase(0,1);
        }
        else if (w.find_first_of(" ") != std::string::npos) {
            w.erase(0,1);
        }
    }
    return w;
}
string rid_of_last(string w) {
    while (w.find_last_of("\t") != std::string::npos) {
        if (w[w.length()-1] != '\t' && w[w.length()-1] != ' ') return w;
        else if (w.find_last_of("\t") != std::string::npos) {
            w.erase(w.length()-2, w.length()-1);
        }
        else if (w.find_last_of(" ") != std::string::npos) {
            w.erase(w.length()-2, w.length()-1);
        }

    }
    return w;
}