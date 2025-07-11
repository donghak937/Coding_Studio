#include <iostream>

using namespace std;

void merge(int* a, int* b, int n1, int n2, int n3, int n4){
    int i,j,k,t;
    i = n1;
    j = n3;
    k = n1;
    
    while((i <= n2) && (j <= n4)){
        if (a[i] <= a[j]){
            b[k++] = a[j++];
        }
        else{
            b[k++] = a[i++];
        }
    }
    if (i > n2){
        for(t = j; t <= n4; t++){
            b[t] = a[t];
        }
    }
    else{
        for(t = i; t <= n2; t++){
            b[k + t - i] = a[t];
        }
    }

}
void merge_pass(int* a, int* b, int n, int s){
    int i, j;
    for(i = 0; i < (n - 2 * s + 1); i += 2 * s){
        merge(a, b, i, i + s - 1, i + s, i + s * 2 - 1);
    }
    if (i + s <= n){
        merge (a, b, i, i + s - 1, i + s, n);
    }
    else{
        for(j = i; j <= n; j++){
            b[j] = a[j];
        }
    }

}
void merge_sort(int* a, int size){
    int* b = new int[size];
    int k = 1;
    while (k < size){
        merge_pass(a, b, size - 1, k);
        k *= 2;
        merge_pass(b, a, size - 1, k);
        k *= 2;
        
    }

}

int main(){
    int size;
    int price;
    cin >> size;
    cin >> price;
    int* a = new int[size];
    for(int i = 0; i < size; i++){
        cin >> a[i];
    }

    merge_sort(a, size);
    cout << a[price - 1];

    return 0;
}