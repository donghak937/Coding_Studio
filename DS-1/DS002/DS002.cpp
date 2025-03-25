#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1, y1; //첫 좌표
    double x2, y2; //두 좌표
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << (sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}