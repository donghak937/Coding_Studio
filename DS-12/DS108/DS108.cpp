#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
    int size;
    int count = 0;
    int tmp;
    int max[2] = {0 , 0};
    vector<int> a;
    cin >> size;

    for(int i = 0 ; i < size; i++){
        cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < a.size()-1; i++){
        if (a[i] == a[i+1]){
            count++;
        }
        if (a[i] != a[i+1]){
            if(count > max[1]){
                max[1] = count;
                max[0] = a[i];
            }
        }
    }
    if(count > max[1]){
        max[1] = count;
        max[0] = a[a.size()-1];
    }
    cout << max[0];
    

    

}