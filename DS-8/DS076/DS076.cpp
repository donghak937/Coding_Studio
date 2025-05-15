#include <iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n ; i++)
        cout << "[" << arr[i] << "] " ;
    cout << endl;
}

int insertnum(int*& arr){
    int size;
    arr = new int[size];
    cout << "Enter count: ";
    cin >> size;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    return size;
}

void selectionSort(int *arr, int n){
    int min_i = 0;

    for(int i = 0; i < n-1; i++){
        min_i = i;
        for(int j = i+1; j < n; j++){
            if(arr[min_i] > arr[j]) min_i = j;
        }
        if(i != min_i) swap(arr[i], arr[min_i]);
    print(arr, n);
    }
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
    print(arr, n);
    }
}

void bubbleSort(int *arr, int n){
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    print(arr, n);
    }
}

void quickSort(int *arr, int start, int end, int size){
    if (start >= end){
        return;
    }

    int temp;
    int pivot = start;
    int i = pivot + 1;
    int j = end;

    while(j >= i){
        while(i <= end && arr[i] < arr[pivot]){
            i++;
        }
        while(j > start && arr[j] > arr[pivot]){
            j--;
        }
        if(i > j){
            temp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = temp;
        }
        else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    print(arr, size);
    quickSort(arr, start, j-1, size);
    quickSort(arr, j+1, end, size);

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
        arr[left+ a] = tmp[a];
    }
    print(arr, 5);
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
    int input;
    int size;
    bool goOut = false;
    while(!goOut){
        cout << "1.selection 2.insertion 3.bubble 4.quick 5.merge 6.exit > ";
        cin >> input;
        switch (input)
        {
        case 1:
            size = insertnum(arr);
            cout << "=== selection sort ===" << endl;
            print(arr, size);
            selectionSort(arr, size);
            delete[] arr;
            break;
        case 2:
            size = insertnum(arr);
            cout << "=== insertion sort ===" << endl;
            print(arr, size);
            insertionSort(arr, size);
            delete[] arr;
            break;
        case 3:
            size = insertnum(arr);
            cout << "=== bubble sort ===" << endl;
            print(arr, size);
            bubbleSort(arr, size);
            delete[] arr;
            break;
        case 4:
            size = insertnum(arr);
            cout << "=== quick sort ===" << endl;
            print(arr, size);
            quickSort(arr, 0, size-1, size);
            delete[] arr;
            break;
        case 5:
            size = insertnum(arr);
            cout << "=== merge sort ===" << endl;
            print(arr, size);
            mergeSort(arr, 0, size-1);
            delete[] arr;
            break;
        case 6:
            cout << "bye!";
            goOut = true;
            break;
        default:
            cout << "PLZ enter valid number" << endl;
            break;
        }
    }
}