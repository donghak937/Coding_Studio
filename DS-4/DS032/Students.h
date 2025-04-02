#include <iostream>
#pragma once
using namespace std;


class Student {
private: 
    string name;
    double score;
public:
    Student(string names, double scores);    // constructor to make the Stack with size 
    ~Student();           // Destructor to remove from memory 
    string getName();
    double getScore();
    
};