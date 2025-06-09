#include "Heap.h"

MinHeap::MinHeap() {
    length = 0;
}

MinHeap::~MinHeap() {

}

void MinHeap::insertKey(int value) {
    if (length >= 30) {
        cout << "Heap is full\n";
        return;
    }
    arr[length] = value;
    minHeapifyUp(length);
    length++;
}

void MinHeap::arrayEnter(){
    int size;
    cin >> size;
    

}

int MinHeap::deleteKey() {
    if (isEmpty()) {
        cout << "Heap is empty\n";
        return -1;
    }
    int rootValue = arr[0];
    arr[0] = arr[length - 1];
    length--;
    minHeapifyDown(0);
    return rootValue;
}

int MinHeap::peek() {
    if (isEmpty()) {
        cout << "Heap is empty\n";
        return -1;
    }
    return arr[0];
}

int MinHeap::size() {
    return length;
}

bool MinHeap::isEmpty() {
    return length == 0;
}

void MinHeap::minHeapifyUp(int index) {
    while (index > 0) {
        int parent = (index - 1) / 2;
        if (arr[parent] > arr[index]) {
            swap(arr[parent], arr[index]);
            index = parent;
        } else {
            break;
        }
    }
}

void MinHeap::minHeapifyDown(int root) {
    int smallest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < length && arr[left] < arr[smallest])
        smallest = left;
    if (right < length && arr[right] < arr[smallest])
        smallest = right;

    if (smallest != root) {
        swap(arr[root], arr[smallest]);
        minHeapifyDown(smallest);
    }
}

void MinHeap::printHeap() {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}