#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string inputString;
}Word;

typedef struct {
    int lengthLetter;
}Leng;

string rid_of_first(string w);
string rid_of_last(string w);
int rid_of_letters(string w);

int main() {

    Word word;
    Leng count;

    getline(cin, word.inputString);
    word.inputString = rid_of_last(word.inputString);
    word.inputString = rid_of_first(word.inputString);
    count.lengthLetter = rid_of_letters(word.inputString);
    cout << count.lengthLetter;


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
int rid_of_letters(string w) {
    int i = 0;
    while (i < w.length()) {
        if (w[i] == ' ') {
            w.erase(0, i+1);
            i = 0;
        }
        else i++;
    }
    return i;
}