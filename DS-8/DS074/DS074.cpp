#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void quickSort(int *arr, int start, int end, int size){
    if (start >= end){
        return;
    }

    int temp;
    int pivot = end;
    int i = start;
    int j = pivot - 1;

    while(j >= i){
        while(i <= pivot - 1 && arr[i] < arr[pivot]){
            i++;
        }
        while(j >= start && arr[j] > arr[pivot]){
            j--;
        }
        if(i > j){
            temp = arr[pivot];
            arr[pivot] = arr[i];
            arr[i] = temp;
        }
        else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    #ifdef DEBUGMODE
    print(arr, size);
    #endif
    quickSort(arr, start, i - 1, size);
    quickSort(arr, i + 1, end, size);
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

    quickSort(arr, 0, size-1, size);
    
    #ifndef DEBUGMODE
    cout << "=== quick sort ===" << endl;
    print(arr, size);
    #endif

    return 0;
}