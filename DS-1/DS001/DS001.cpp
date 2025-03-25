#include <iostream>
using namespace std;

int main(){
    int height, weight;
    double bmi;

    cin >> height >> weight;
    bmi = weight / ((height * 0.01) * (height * 0.01));
    bmi >= 25 ? cout << "Yes" : cout << "no"; 
}