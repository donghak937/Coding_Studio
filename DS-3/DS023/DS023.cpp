#include <iostream>

using namespace std;

class Product {
public:
    string name;
    int orginalPrice;
    double discountRate;
    string maker;
    string gram;
    void size_add(Product* &class_adress, int size);
    void Product_add();
    void print_product(Product*& class_adress, int size);
    int cal_price(Product s);

};

void Product::size_add(Product* &class_adress, int size) {
    Product* newOne = new Product[size + 2];
    //memcpy(newOne, class_adress, size);
    for (int i = 0; i < size+1; i++) {
        newOne[i].name = class_adress[i].name;
        newOne[i].orginalPrice = class_adress[i].orginalPrice;
        newOne[i].discountRate = class_adress[i].discountRate;
        newOne[i].maker = class_adress[i].maker;
        newOne[i].gram = class_adress[i].gram;
    }
    delete[](class_adress);
    class_adress = newOne;
    newOne = NULL;


}

void Product::Product_add() {
    char word[100];
    cin.ignore();
    cin.getline(word, 100);
    name = word;

    cin >> orginalPrice >> discountRate >> gram >> maker;
    
}

void Product::print_product(Product*& class_adress, int size) {
    Product* printer;
    printer = class_adress;
    for (int i = 0; i < size; i++) {
        if (printer[i].discountRate == 0) {
            cout << cal_price(printer[i]) << " (" << printer[i].discountRate << "%)\t " << printer[i].name;
            cout << " " << printer[i].gram << " " << printer[i].maker << endl;
        }
        else {
            cout << cal_price(printer[i]) << " (-" << printer[i].discountRate << "%)\t " << printer[i].name;
            cout << " " << printer[i].gram << " " << printer[i].maker << endl;
        }
        
    }
}

int Product::cal_price(Product s) {
    return s.orginalPrice - (s.orginalPrice * s.discountRate * 0.01);
}

int userInput();
int main() {

    Product* s = new Product[1];
    int input;
    int i = 0;

    while (1) {
        cout << "1.Add 2.List 3.Quit > ";
        input = userInput();

        if (input == 1) {

            s[i].Product_add();
            s[i].size_add(s, i);
            i++;
        }
        else if (input == 2) s[i].print_product(s, i);
        else if (input == 3) break;
        else cout << "PLZ Enter vaild Number!\n";

    }


}

int userInput() {
    int input;
    cin >> input;
    return input;
}


