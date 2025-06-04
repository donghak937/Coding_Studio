#include <iostream>

using namespace std;

void quick_sort(int* a, int left, int right){
    int temp, pivot;
    int i,j;
    
    if (left >= right) return;
    i = left;
    j = right + 1;
    pivot = a[left];

    do {
        do {
            i++;    
        } while ((i <= right) && (a[i] < pivot));
            
        do {
            j--;
        } while ((j >= left) && (a[j] > pivot));

        if (i < j){
            swap(a[i], a[j]);
        }

    } while(i < j);
    swap(a[j], a[left]);
    quick_sort(a, left, j - 1);
    quick_sort(a, j+1, right);

}

void printall(int* a, int size){
    for(int i = 0; i < size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(){
    int size;
    int swaps;
    int count = 0;
    int total = 0;
    cin >> size;
    cin >> swaps;
    int* a = new int[size];
    int* b = new int[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }
    for(int i = 0; i < size; i++){
        cin >> b[i];
    }


    quick_sort(a, 0, size - 1);
    quick_sort(b, 0, size - 1);

    for(int i = 0; i < swaps; i++){
        if (a[0] < b[size - 1]){
            swap(a[0], b[size - 1]);
            count++;
            quick_sort(a, 0, size - 1);
            quick_sort(b, 0, size - 1);
            #ifdef DEBUG
            printall(a, size);
            printall(b ,size);
            #endif
        }
        
        
    }


    for(int i = 0; i < size; i++){
        total += a[i];
    }
    cout << count << " " << total;

    return 0;
}