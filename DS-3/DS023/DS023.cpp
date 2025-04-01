#include <iostream>
#include <string>

using namespace std;

class Product {
public:
    string name;
    int orginalPrice;
    double discountRate;
    string maker;
    string gram;
    void Product_add(Product &p);
    void print_product(Product a[], int size);
    int cal_price(Product s);

};

void Product::Product_add(Product &p) {
    Product* s;
    s = &p; 
    cin.ignore();
    getline(cin, name);
    cin >> s->orginalPrice >> s->discountRate >> s->gram >> s->maker;
    delete s;
    
}

void Product::print_product(Product a[], int size) {
    Product* printer;
    for (int i = 0; i < size; i++) {
        if (printer[i].discountRate == 0) {
            cout << cal_price(printer[i]) << " (" << printer[i].discountRate << "%)\t" << printer[i].name;
            cout << " " << printer[i].gram << " " << printer[i].maker << endl;
        }
        else {
            cout << cal_price(printer[i]) << " (-" << printer[i].discountRate << "%)\t" << printer[i].name;
            cout << " " << printer[i].gram << " " << printer[i].maker << endl;
        }
        
    }
}

int Product::cal_price(Product s) {
    return s.orginalPrice - (s.orginalPrice * s.discountRate * 0.01);
}

int userInput();
int main() {

    Product* list[100];
    int input;
    int i = 0;

    while (1) {
        cout << "1.Add 2.List 3.Quit > ";
        input = userInput();

        if (input == 1) {
            list[i] = new Product;
            list[i]->Product_add(*list[i]);
            i++;
        }
        else if (input == 2) list[i]->print_product(*list, i);
        else if (input == 3) break;
        else cout << "PLZ Enter vaild Number!\n";

    }


}

int userInput() {
    int input;
    cin >> input;
    return input;
}
