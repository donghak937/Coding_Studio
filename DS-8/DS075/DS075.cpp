#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void merge(int *arr, int left, int mid, int right, int size){
    int* tmp = new int[right - left + 1];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= right){
        if (arr[i] > arr[j]){
            tmp[k++] = arr[j++];
        }
        else{
            tmp[k++] = arr[i++];
        }
    }
    while (i <= mid) tmp[k++] = arr[i++];
    while (j <= right) tmp[k++] = arr[j++];

    for(int a = 0; a < right - left + 1; a++){
        arr[left+ a] = tmp[a];
    }
    #ifdef DEBUGMODE
    print(arr, size);
    #endif
    

}

void mergeSort(int* arr, int left, int right, int size){
    if (left < right){
        int mid = (right + left) / 2;
        mergeSort(arr, left, mid, size);
        mergeSort(arr, mid+1, right, size);
        merge(arr, left, mid, right, size);

        
    }
}

int main(){
    int *arr;
    int size;
    cin >> size;
    arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    print(arr, size);
    mergeSort(arr, 0, size -1, size);
    #ifndef DEBUGMODE
    cout << "=== merge sort ===" << endl;
    print(arr, size);
    #endif
    return 0;
}