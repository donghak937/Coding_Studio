#include <iostream>
using namespace std;

class Student {
private: 
    string name;
    double score;
public:
    Student(string names, double GPA);
    ~Student();           // Destructor to remove from memory 
};