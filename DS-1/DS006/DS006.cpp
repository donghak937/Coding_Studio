#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct st_score
{
    string subject_name; 
    int credit;
    int score;
    string grade;
};

string grade_find(int jumsu){
    if (jumsu >= 95) return "A+ 4.5";
    else if (jumsu >= 90) return "A0 4.0";
    else if (jumsu >= 85) return "B+ 3.5";
    else if (jumsu >= 80) return "B0 3.0";
    else if (jumsu >= 75) return "C+ 2.5";
    else if (jumsu >= 70) return "C0 2.0";
    else if (jumsu >= 65) return "D+ 1.5";
    else if (jumsu >= 60) return "D0 1.0";
    else return "F";
}

double credit_find(int jumsu){
    if (jumsu >= 95) return 4.5;
    else if (jumsu >= 90) return 4.0;
    else if (jumsu >= 85) return 3.5;
    else if (jumsu >= 80) return 3.0;
    else if (jumsu >= 75) return 2.5;
    else if (jumsu >= 70) return 2.0;
    else if (jumsu >= 65) return 1.5;
    else if (jumsu >= 60) return 1.0;
    else return 0;
}


int main(){
    st_score st[3];
    int total = 0;
    double GPA = 0;

    for (int i = 0; i < 3; i++){
        cin >> st[i].subject_name >> st[i].credit >> st[i].score;
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < st[i].subject_name.length(); j++){
            if (st[i].subject_name[j] == '_') st[i].subject_name[j] = ' ';
        }
    }

    total =  st[0].credit + st[1].credit + st[2].credit;
    GPA = ((st[0].credit * credit_find(st[0].score)) + (st[1].credit * credit_find(st[1].score)) + (st[2].credit * credit_find(st[2].score))) / total;

    GPA *= 100;
    GPA = floor(GPA);
    GPA /= 100;

    for (int i = 0; i < 3; i++){
        st[i].grade = grade_find(st[i].score);
        cout << st[i].subject_name << "("<< st[i].credit << ") \t" << st[i].grade << endl;  
    }
    cout << "Total credits " << total << ", GPA " << GPA;
}