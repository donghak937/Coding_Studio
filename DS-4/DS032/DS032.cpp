#include <iostream>
#include "Students.h"
#include "ClassStack.h"

using namespace std;

int main() {
    ClassStack stack;
    stack.loadData("students2.txt");
    stack.display();

    return 0;
}