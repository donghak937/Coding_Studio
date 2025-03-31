#include <iostream>
#include <string>

using namespace std;

class English_Score {
    public:
        string name;
        int rc_score;
        int lc_score;
        English_Score();
        void score_in();
        string is_score_high(int score);
        void print_score();
    
    };
    
    English_Score::English_Score() {
        rc_score = 0;
        lc_score = 0;
    }
    
    void English_Score::score_in() {
        getline(cin, name);
        while (1) {
            cout << "LC > ";
            cin >> lc_score;
            if (lc_score < 495 && lc_score >= 0) break;
        }
        while (1) {
            cout << "RC > ";
            cin >> rc_score;
            if (rc_score < 495 && rc_score >= 0) break;
        }
    
    }
    
    string English_Score::is_score_high(int score) {
        if (score >= 350) return "Pass";
        else return "Fail";
    }
    void English_Score::print_score() {
        int total = lc_score + rc_score;
        cout << "[" << name << "]\n";
        cout << "LC - " << lc_score << " " << is_score_high(lc_score) << endl;
        cout << "RC - " << rc_score << " " << is_score_high(rc_score) << endl;
        cout << "Total - " << total;
    }
    
    int main() {
    
        English_Score s1;
        s1.score_in();
        s1.print_score();
    }

    


