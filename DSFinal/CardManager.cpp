#include "cardManager.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <map>

extern map<string, Card*> allclasses;

map<string, double> gradescore = {
    {"A+",4.5},{"A0",4.0},{"B+",3.5},{"B0",3.0},{"C+",2.5},{"C0",2.0},{"D+",1.5},{"D0",1.0},{"F",0}
};

CardManager::~CardManager(){
    vector<Card*>::iterator iter;
    for (iter = myclasses.begin(); iter != myclasses.end(); ++iter) {
		delete (*iter);
	}
}

void CardManager::printAll(){
    for (int i=0; i<myclasses.size(); i++){
        cout << i+1 << " | " << myclasses[i]->toString() << endl;
    }
}

void CardManager::addCard(){
    string code, grade;
	cout << ">> Enter class code > ";
	cin >> code;
    if(allclasses.count(code)>0){

        for (Card* c : myclasses) {
            if (c->getCode() == code) {
                cout << "Already taken." << endl;
                return;
            }
        } //중복 처리 

        cout << allclasses[code]->toStringShort() << endl;

        while (true) {
            cout << ">> Enter grade > ";
            cin >> grade;

            if (gradescore.count(grade) > 0) {
                break;  // 유효한 성적이므로 탈출
            } else {
                cout << "Invalid grade. Please try again." << endl;
            }
        }


        Card* new_card = new Card(allclasses[code], grade);
        myclasses.push_back(new_card);
        count++;
        total_credit += new_card->getCredit();
    }
    else{
        cout << "No such class." << endl;
    }
}

void CardManager::editCard(){
	int no;
    string new_grade;
	cout << ">> Enter a Card number > ";
	cin >> no;
    cout << myclasses[no-1]->toString() << endl;
    cout << ">> Enter new grade > ";
    cin >> new_grade;
    myclasses[no-1]->setGrade(new_grade);
    cout << "Grade changed." << endl;	
}

void CardManager::sortByCode(){
    sort(myclasses.begin(), myclasses.end(), Card::cmpCode);
}

void CardManager::sortByName(){
    sort(myclasses.begin(), myclasses.end(), Card::cmpName);
}

void CardManager::sortByCredit(){
    sort(myclasses.begin(), myclasses.end(), Card::cmpCredit);
}

void CardManager::loadCards(string filename){
    string line, code, grade;
    int count=0;
	ifstream file(filename);
	while(!file.eof()){
        if(file.eof()) break;
		file >> code >> grade;
        Card* new_card = new Card(allclasses[code], grade);
        myclasses.push_back(new_card);
        count++;
        total_credit += new_card->getCredit();
	}
	file.close();
    cout << count << " classes are loaded.\n";
}

void CardManager::findCards(string name){
	int found = 0;
	cout << "Searching keyword: " << name << endl;
    for (int i=0; i<myclasses.size(); i++){
		if(myclasses[i]->getName().find(name) != string::npos){
			found++;
            cout << i+1 << " | " << myclasses[i]->toString() << endl;
		}
	}
	cout << count << " classes found.\n";
}

void CardManager::isHigher(int credit){
    cout << "classes that has higher credits than" << credit << endl;
    for (int i=0; i<myclasses.size(); i++){
        if (myclasses[i]->getCredit() >= credit){
            cout << myclasses[i]->toString() << endl;
        }
    }
}




















/*
static bool cmpGrade(Card* c1, Card* c2) {
    return Card::gradescore[c1->getGrade()] < Card::gradescore[c2->getGrade()];
}
*/ // -> grade순 정렬
/*
static bool cmpCreditThenName(Card* c1, Card* c2) {
    if (c1->getCredit() == c2->getCredit())
        return c1->getName() < c2->getName();
    return c1->getCredit() < c2->getCredit();
}
*/ // -> 학점 같으면 이름순 정렬