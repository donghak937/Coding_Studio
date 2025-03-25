#include <iostream>
using namespace std;

int main(){
    int day, month; 
    int day_count = 0;
    cin >> month >> day;

    switch (month - 1)
    {
    case 12:
        day_count += 31;
    case 11:
        day_count += 30;
    case 10:
        day_count += 31;
    case 9:
        day_count += 30;
    case 8:
        day_count += 31;
    case 7:
        day_count += 31;        
    case 6:
        day_count += 30;
    case 5:
        day_count += 31;
    case 4:
        day_count += 30;
    case 3:
        day_count += 31;
    case 2:
        day_count += 28;
    case 1:
        day_count += 31;

    }

    cout << day_count + day;
}