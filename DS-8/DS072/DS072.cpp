#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void insertionSort(int *arr, int n){
    int i;
    int j;
    int tmp;
    for(i = 1; i < n; i++){
        tmp = arr[i];
        for(j = i-1; j >= 0; j--){
            if (arr[j] > tmp) swap(arr[j], arr[j+1]);
        }
#ifdef DEBUGMODE
    print(arr, n);
#endif
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
    insertionSort(arr, size);
    cout << "=== bubble sort ===" << endl;
    print(arr, size);
    return 0;
}