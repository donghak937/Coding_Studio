#include <iostream>
using namespace std;

struct st_score
{
    int kor, eng, math;
    int total;
    double average;
};


int main(){
    st_score st;
    cin >> st.kor >> st.eng >> st.math;

    st.total = st.kor + st.eng + st.math;
    st.average = st.total / 3.0;

    cout.precision(3);
    cout << st.average << endl;

    st.kor >= 70 ? cout << "Korean - Pass\n" :  cout << "Korean - Fail\n";
    st.eng >= 70 ? cout << "English - Pass\n" :  cout << "English - Fail\n";
    st.math >= 70 ? cout << "Math - Pass" :  cout << "Math - Fail";
}