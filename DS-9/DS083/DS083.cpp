#include <iostream>
using namespace std;
#define _DEBUG

int size = 0;

void printArray(int* arr, int size)
{
    cout << "==> Heap : ";
    for (int i = 1; i <= size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void insertKey(int arr[], int N, int value)
{
    if (::size == N - 1)
    {
        cout << "\nOverflow: Could not insertKey\n";
        return;
    }
    ::size++;
    int k = ::size;
    //insert operation
    while (k != 1 && arr[k/2] < value) {
        arr[k] = arr[k/2];
        k /= 2;

    }
    arr[k] = value;
    
#ifdef _DEBUG
    printArray(arr, ::size);
#endif  
}

void maxHeapify(int arr[], int rooti)
{
   // maxHeapify operation
    int t = arr[rooti];
    int child = rooti * 2;

    if (child > ::size) return;
    if ((child < ::size) && (arr[child] < arr[child+1])){
        child++;
    }
    int tmp = arr[child];

    if (arr[child] > arr[rooti]){
        arr[child] = t;
        arr[rooti] = tmp;
        maxHeapify(arr, child);
    }

}

void deleteKey(int arr[], int N){
    if (::size == 0)
    {
        cout << "\nCould not deleteKey\n";
        return;
    }
#ifdef _DEBUG
    cout << "=> Delete " << arr[1] << endl;
#endif    
    
    // maxHeapify operation
    arr[1] = arr[::size];
    ::size--;              
    maxHeapify(arr, 1);

    
#ifdef _DEBUG
    printArray(arr, ::size);
#endif     
}

int main()
{
    int arr[20];
    int menu;
    while(1){        
        cout << "1. insert 2.delete 3.print 4.quit > " ;
        cin >> menu;
        if(menu == 1){
            int value;
            cout << "new value? ";
            cin >> value;
            insertKey(arr, 20, value);
        }
        else if(menu == 2){
            deleteKey(arr, 20);
        }
        else if(menu == 3){
            printArray(arr, ::size);
        }
        else break;
    }
    cout << "Bye!" << endl;
    
    return 0;
}