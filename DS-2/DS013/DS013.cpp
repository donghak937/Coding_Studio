#include <iostream>
#include <string>
using namespace std;


typedef struct {
    string menuName;
    int price;
}Menu;

typedef struct {
    string cafeName = "";
    int menuCount;
    Menu* menuList;

}Cafe;

void addCafe(Cafe& r1);
void addMenu(Menu& m1);
void displayMenus(Cafe& r1);

int main() {

    //강의중에 나온 것
    Cafe* cafe1 = new Cafe;
    addCafe(*cafe1);
    displayMenus(*cafe1);

    //스스로 생각해서 썼던 것
    //Cafe cafe1;
   // addCafe(cafe1);
    //displayMenus(cafe1);


    //delete[] my_cafe.menu_list;

    delete[] cafe1->menuList;
    //delete cafe;
    


}

void addCafe(Cafe& r1) {
    getline(cin, r1.cafeName);
    cin >> r1.menuCount;
    r1.menuList = new Menu[r1.menuCount];
    for (int i = 0; i < r1.menuCount; i++) {
        addMenu(r1.menuList[i]);
    }
}

void addMenu(Menu& m1) {
    cin >> m1.menuName;
    cin >> m1.price;
}
void displayMenus(Cafe& r1) {
    cout << "===== " << r1.cafeName << " =====" << endl;
    for (int i = 0; i < r1.menuCount; i++) {
        cout << r1.menuList[i].menuName << " " << r1.menuList[i].price << endl;
    }
    cout << "=================";
}