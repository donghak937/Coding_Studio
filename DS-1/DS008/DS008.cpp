#include <iostream>
#include <string>

using namespace std;
int main(){

   string num;
   int total = 0;

   cin >> num;

   for(int i = 0; i < num.length(); i++){
        if(num[i] == 'I'){
            if (num[i+1] == 'V' || num[i+1] == 'X'){
                total -= 1; 
            } 
            else{
                total += 1;
            }  
        }

        else if(num[i] == 'V') total += 5;

        else if(num[i] == 'X'){
            if (num[i+1] == 'L' || num[i+1] == 'C'){
                total -= 10; 
            } 
            else{
                total += 10;
            }
        }
        else if(num[i] == 'L') total += 50;

        else if(num[i] == 'C'){
            if (num[i+1] == 'D' || num[i+1] == 'M'){
                total -= 100; 
            } 
            else{
                total += 100;
            }
        }
        else if(num[i] == 'D') total += 500;
        else if(num[i] == 'M') total += 1000;
   }       

   cout << total;
}