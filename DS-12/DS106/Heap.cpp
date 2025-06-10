#include "Heap.h"
#include <iostream>

MinHeap::MinHeap() {
    length = 0;
}

MinHeap::~MinHeap() {

}

void MinHeap::insertKey(int value) {
    arr[length] = value;
    length++;
    minHeapifyUp(length-1);

}

void MinHeap::arrayEnter(){
    int size;
    length = 1;
    cin >> size;
    for(int i = 1; i <= size; i++){
        cin >> arr[i];
        minHeapifyUp(i);
        
    }
    length = size + 1;
}

int MinHeap::deleteKey() {
    int tmp = arr[1];
    arr[1] = arr[--length];
    minHeapifyDown(1);
    return tmp;
}

int MinHeap::peek() {
    return arr[length - 1];
}

int MinHeap::size() {
    return length-1;
}

bool MinHeap::isEmpty() {
    return length == 1;
}

void MinHeap::minHeapifyUp(int index) { //아래에 하나가 생기면 일어나는 일
    int parent = index / 2;
    int tmp = arr[index];
    while (index != 1 && (arr[parent] > tmp)){
        arr[index] = arr[parent];
        index = parent;
        parent /= 2;
    }
    arr[index] = tmp;
}

void MinHeap::minHeapifyDown(int root) { //그 노드를 기준으로 재구성
    int parent = root;
    int child = parent * 2;
    int tmp = arr[root];

    while (child < length){
        if (child+1 < length &&  arr[child] > arr[child + 1]){
            child++;
        }

        if (arr[child] >= tmp){
            break;
        }
        else{
            arr[parent] = arr[child];
            parent = child;
            child *= 2;
        }
    }
    arr[parent] = tmp;
}

void MinHeap::printHeap() {
    
    for (int i = 1; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}