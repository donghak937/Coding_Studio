#include <iostream>
#include "Students.h"
#include "MyCircularQueue.h"

using namespace std;

int main() {
    MyCircularQueue queue;
    queue.loadData("students2.txt");
    queue.display();

    return 0;
}