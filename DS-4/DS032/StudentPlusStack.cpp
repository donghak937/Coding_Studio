#include "ClassStack.h"
#include "Students.h"
#include <iostream>
#include <fstream>
using namespace std;

//Student Methods
Student::Student(string names, double scores) {
    name = names;
    score = scores;
}
Student:: ~Student() {}
string Student::getName() {
    return name;
}
double Student::getScore() {
    return score;
}

//-----------------------------------------------------------//
//ClassStack Methods
ClassStack::ClassStack() {
    top = 0;
}
ClassStack :: ~ClassStack() {}
void ClassStack::push(Student& s) {
    S[top] = &s;
    top++;
}
Student ClassStack::pop() {
    top--;
    return *S[top];
}
int ClassStack::isFull() {
    if (top == 99) return 0;
    else return 1;
}
int ClassStack::isEmpty() {
    if (top == 0) return 0;
    else return 1;

}
void ClassStack::display() {
    double max = 0;
    Student a("",0);
    for (int i = 0; i < top - 1; i++) {
        if (S[i]->getScore() > max) {
            max = S[i]->getScore();
        }
    }
    cout << "Top GPA : " << max << endl;

    while (isEmpty()) {
        a = pop();
        if (a.getScore() == max) {
            cout << a.getName() << endl;
        }
    }
}
Student ClassStack::stackTop() {
    return *S[top - 1];
}
void ClassStack::loadData(string filename) {
    string name;
    double score;
    ifstream file(filename);
    while (!file.eof()) {
        if (file.eof()) break;
        file >> score >> name;
        Student* a = new Student(name, score);
        push(*a);
    }
    file.close();
}