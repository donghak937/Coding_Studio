#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct st_product {
    string name = "";
    int price;
    string manufacturer = "";

};

bool isSame(struct st_product* s1, struct st_product* s2);

int main() {

    struct st_product p1, p2;

    cin >> p1.name >> p1.price >> p1.manufacturer;
    cin >> p2.name >> p2.price >> p2.manufacturer;
    if (isSame(&p1, &p2)) cout << p1.name << " is equal.";
    else cout << p1.name << " and " << p2.name << " is not equal";
}

bool isSame(struct st_product* s1, struct st_product* s2) {
    if (stricmp(s1->name.c_str(), s2->name.c_str()) == 0 && s1->price == s2->price) return true;
    else return false;
}
