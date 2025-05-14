#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

void merge(int *arr,int left, int mid, int right){
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
        arr[a] = tmp[a];
    }
    #ifdef DEBUGMODE
    print(arr, 6);
    #endif
    

}

void mergeSort(int* arr, int left, int right){
    if (left < right){
        int mid = (right + left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
        
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
    mergeSort(arr, 0, size -1);
    cout << "====" <<endl;
    print(arr, size);
    return 0;
}