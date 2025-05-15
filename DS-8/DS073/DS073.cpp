#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void bubbleSort1(int *arr, int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
#ifdef DEBUGMODE
    print(arr, n);
#endif
    }
}

void bubbleSort2(int *arr, int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            if (arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
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
    
    cout << "=== ascending order ===" <<endl;
    bubbleSort1(arr, size);
    #ifndef DEBUGMODE
    print(arr, size);
    #endif

    cout << "=== descending order ===" <<endl;
    bubbleSort2(arr, size);
    #ifndef DEBUGMODE
    print(arr, size);
    #endif

    return 0;
}