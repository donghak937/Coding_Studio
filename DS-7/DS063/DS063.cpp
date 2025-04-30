#include "queueIntList.h"
#include <iostream>
using namespace std;

int main() {

    MyQueueIntList Q1;
    MyQueueIntList Q2;
    int q1win = 0;
    int q2win = 0;
    int condition = 2;

    int winHolder;
    int loseHolder;
    // 0 = p1 win
    // 1 = p2 win
    // 2 = draw

    int size;
    cin >> size;
    int num;

    for(int i = 0; i < size; i++){
        cin >> num;
        Q1.enqueue(num);
    }

    for(int i = 0; i < size; i++){
        cin >> num;
        Q2.enqueue(num);
    }
    
    for(int i = 0; i < size; i++){
         if (condition == 0){
            if ((winHolder - loseHolder - 1) + Q1.peek() > Q2.peek()){
                cout << "Round" << i+1 << " - P1 win!" << endl;
                winHolder = (winHolder - loseHolder - 1) + Q1.dequeue();
                loseHolder = Q2.dequeue();
                q1win++; 
                condition = 0;
            }
            else if ((winHolder - loseHolder - 1) + Q1.peek() < Q2.peek()){
                cout << "Round" << i+1 << " - P2 win!" << endl;
                loseHolder = (winHolder - loseHolder - 1) + Q1.dequeue();
                winHolder = Q2.dequeue();
                q2win++; 
                condition = 1;
            }
            else{
                cout << "Round" << i+1 << " - Draw" << endl;
                Q1.dequeue();
                Q2.dequeue();
                condition = 2;
            }
        }
        else if (condition == 1){
            if ((winHolder - loseHolder - 1) + Q2.peek() < Q1.peek()){
                cout << "Round" << i+1 << " - P1 win!" << endl;
                loseHolder = (winHolder - loseHolder - 1) + Q2.dequeue();
                winHolder = Q1.dequeue();
                q1win++; 
                condition = 0;
            }
            else if ((winHolder - loseHolder - 1) + Q2.peek() > Q1.peek()){
                cout << "Round" << i+1 << " - P2 win!" << endl;
                loseHolder = Q1.dequeue();
                winHolder = (winHolder - loseHolder - 1) + Q2.dequeue();
                q2win++; 
                condition = 1;
            }
            else{
                cout << "Round" << i+1 << " - Draw" << endl;
                Q1.dequeue();
                Q2.dequeue();
                condition = 2;
            }
        }
        else {
            if (Q1.peek() > Q2.peek()){
                cout << "Round" << i+1 << " - P1 win!" << endl;
                winHolder = Q1.dequeue();
                loseHolder = Q2.dequeue();
                q1win++; 
                condition = 0;
            }
            else if (Q1.peek() < Q2.peek()){
                cout << "Round" << i+1 << " - P2 win!" << endl;
                loseHolder = Q1.dequeue();
                winHolder = Q2.dequeue();
                q2win++; 
                condition = 1;
            }
            else{
                cout << "Round" << i+1 << " - Draw" << endl;
                Q1.dequeue();
                Q2.dequeue();
                condition = 2;
            }
        }
    }
    if (q1win > q2win ) cout << "Final - P1 win!";
    else if (q1win > q2win) cout << "Final - P2 win!";
    else cout << "Final - Draw!";

    return 0;
}