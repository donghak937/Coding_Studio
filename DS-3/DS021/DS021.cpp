#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    double getAvg() const;
public:
    string name;
    string sid;
    int* score;
    void print() const;
};

double Student::getAvg() const {
    double avg = 1.0 * (score[0] + score[1] + score[2]) / 3.0;
    return avg;
}

void Student::print() const {
    cout << fixed;
    cout.precision(1);
    cout << "[" << sid << "] " << name << "\nThe Average score is " << getAvg();
}

int main() {

    Student s1;
    int jumsu[3];
    s1.score = jumsu;
    cin >> s1.sid >> s1.score[0] >> s1.score[1] >> s1.score[2];
    cin.ignore();
    getline(cin, s1.name);
    s1.print();
}