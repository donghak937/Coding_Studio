#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void bubbleSort(int *arr, int n, int order){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            if (order == 1){
                if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            }
            else if (order == 2){
                if (arr[j] < arr[j+1]) swap(arr[j], arr[j+1]);
            }
            
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
    cout << "=== ascending order ===" <<endl;
    bubbleSort(arr, size, 1);
    print(arr, size);

    cout << "=== descending order ===" <<endl;
    bubbleSort(arr, size, 2);
    print(arr, size);

    return 0;
}