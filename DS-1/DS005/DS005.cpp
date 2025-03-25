#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    char temp;
    int count = 1;

    getline(cin, word);

    for (int i = 0; i < word.length(); i++){

        if (word[i] >= 97 && word[i] <= 122) {
            word[i] -= 32;
        }
    }

    for (int i = 0; i < word.length(); i++){
        for (int j = 0; j < word.length(); j++){
            if (word[i] < word[j]){
                temp = word[j];
                word[j] = word[i];
                word[i] = temp;
            }
        }
    }

    for (int i = 0; i < word.length(); i++){ 
        if (word[i] == word[i+1]) {
            count++;
        }
        else {
            if (isalpha(word[i]) || word[i] == ' '){
                if (word[i] == ' ') cout << "blank" << " : " << count << endl;
                else{
                    cout << word[i] << " : " << count << endl;
                    count = 1; 
                }  
            }
            else continue;
        }
    }
}