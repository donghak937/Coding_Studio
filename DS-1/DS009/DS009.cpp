/*
Programming Studio DS009
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findRoom(int persons[5]); 
void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc);

int main(){
	string mnames[10]; // names of all male students (max. 10)
	string wnames[10]; // names of all female students (max. 10)
	int mroom[10];		// room numbers assigned all male students
	int wroom[10];		// room numbers assigned all female students
	int person[2][5]={0};   // number of persons assgined to all rooms (two floors & each five rooms) 
	int mcount=0, wcount=0; // number of all persons (male, female)
	int menu;

	srand(time(0));
	cout << "===========================================" << endl;
	cout << "��Ȱ�� ȣ�� ���� ���α׷�" << endl;
	cout << "===========================================" << endl;
	while(1){
		cout << "�޴� : 1.���л� ��� 2.���л� ��� 0.���� > ";
		cin >> menu;
		if(menu==0) break; //���α׷��� �����.

		else if(menu==1) {

			if(mcount>=10) { // ����, ���ڰ� ������ �Ѵ´ٸ�,
				cout << "���� �ʰ��Դϴ�. ��ϺҰ�!" << endl;
				continue;
			}

			cout << "�л� �̸���? > ";
			cin >> mnames[mcount]; //�ʱ� == 0��

			int roomno = findRoom(person[0]); //1��

			mroom[mcount] = 100+roomno; //������ 1-5 + 100 �ؼ� 1������ ������

			cout <<  mnames[mcount] << " �л� " << mroom[mcount] << "ȣ�� �����Ǿ����ϴ�." << endl;
			mcount++;
		}
		else if(menu==2) {
			if(wcount>=10) {
				cout << "���� �ʰ��Դϴ�. ��ϺҰ�!" << endl;
				continue;
			}
			cout << "�л� �̸���? > ";
			cin >> wnames[wcount];
			int roomno = findRoom(person[1]);
			wroom[wcount] = 200+roomno;
			cout <<  wnames[wcount] << " �л� " << wroom[wcount] << "ȣ�� �����Ǿ����ϴ�." << endl;
			wcount++;
		}
	}

	cout << "===========================================" << endl;
	cout << "��Ȱ�� ȣ�� ���� ����� ������ �����ϴ�." << endl;
	cout << "===========================================" << endl;
	printReport(mnames, mroom, mcount, wnames, wroom, wcount);

	return 0;
}

int findRoom(int persons[5]){
// �� ���� ���� ������ �ڵ� ����
    int roomNum;
    while (1) {
        roomNum = rand () % 5 + 1;
        if (persons[roomNum] == 2){
            continue; 
        }
        else{
			persons[roomNum] += 1;
            return roomNum;
        }
    }

}

void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc){
// �� ���� ���� ������ �ڵ� ����
    cout << "���л� ��� (" << mc << ") \n";
    for(int i = 0; i < mc; i++){
        cout << i+1 << ". " << mn[i] << "[" << mr[i] << "ȣ]\n";
    }
	
    cout << "\n���л� ��� (" << wc << ") \n";
    for(int i = 0; i < wc; i++){
        cout << i+1 << ". " << wn[i] << "[" << wr[i] << "ȣ]\n";
    }

	cout << "\nȣ�Ǻ� ���� ���\n";
	
	for(int i = 1; i < 6; i++){
		cout << i + 100 <<"ȣ : ";
		for(int j = 0; j < mc; j++){
			if (i + 100 == mr[j] ){
				cout << mn[j] << " ";
			}
		}
		cout << endl;
	}
	for(int i = 1; i < 6; i++){
		cout << i + 200 <<"ȣ : ";
		for(int j = 0; j < wc; j++){
			if (i + 200 == wr[j] ){
				cout << wn[j] << " ";
			}
		}
		cout << endl;
	}
}