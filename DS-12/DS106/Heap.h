#include <iostream>

using namespace std;

class MinHeap
{
private:
    int arr[30];
    int length; //node 수
public:
    MinHeap();
    ~MinHeap();
    void insertKey(int value);
    int deleteKey();
    int peek();
    int size();
    bool isEmpty();
    void minHeapifyUp(int index); //index의 부모 방향으로 heap 구성
    void minHeapifyDown(int root); // root = 0 root의 자식방향으로 heap
    void printHeap(); //level order print
};

