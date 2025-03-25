#include <iostream>
using namespace std;


int main(){
    int size;
    int *array = new int[size];
    int total = 0;
    int max = 0;

    cin >> size;

    for(int i = 0; i < size; i++){
        cin >> array[i];
        if (array[i] > max) max = array[i];
        total += array[i];
    }

    cout << total << " " << max;
    
}