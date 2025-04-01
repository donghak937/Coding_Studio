#include "GPAStudent.h"
#include <iostream>
using namespace std;

Student::Student() {
    name = "";
    score = 0.0;
}   
Student::Student(string names, double GPA) {
    name = names;
    score = GPA;
}   