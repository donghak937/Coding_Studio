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
    Student a("",0);
    cout << "Top GPA = " << S[0]->getScore() << endl;
    while (isEmpty()) {
        a = pop();
        cout << a.getName() << endl;
    }
}
Student ClassStack::stackTop() {
    return *S[top - 1];
}
void ClassStack::loadData(string filename) {
    double max = 0;
    string name;
    double score;
    ifstream file(filename);
    while (!file.eof()) {
        if (file.eof()) break;
        file >> score >> name;
        Student* a = new Student(name, score);
        if (a->getScore() > max) {
            max = a->getScore();
            clear();
            push(*a);
        }
        else if (a->getScore() == max){
            push(*a);
        }
    }
    file.close();
}

void ClassStack::clear(){
    while (isEmpty()) {
        pop();
    }
}