#include <iostream>
#include <string>

using namespace std;



class Product {
private:
    string name;
    int orginalPrice;
    double discountRate;
    string maker;
    string gram;
    double calPrices;
public:
    Product(string sname, int sprice, double rate, string weight, string make) {
        name = sname;
        orginalPrice = sprice;
        discountRate = rate;
        maker = make;
        gram = weight;
        calPrices = orginalPrice - (orginalPrice * discountRate * 0.01);
    }
    ~Product();
    void forPrint() {
        if (discountRate == 0) {
            cout << calPrices << " (" << discountRate << "%)\t" << name;
            cout << " " << gram << " " << maker << endl;
        }
        else {
            cout << calPrices << " (-" << discountRate << "%)\t" << name;
            cout << " " << gram << " " << maker << endl;
        }          
    }
};


class ProductManager {
private:
    Product* Products[100];
    int count;
public:
    ProductManager() {
        count = 0;
    }
    ~ProductManager() {}
    int getCount() { return count; }

    void printAllProduct();
    void addProduct();

};

void ProductManager::printAllProduct() {
    for (int i = 0; i < count; i++) {
        Products[i]->forPrint();
    }
}
void ProductManager::addProduct() {
    string name;
    int price;
    double disRate;
    string makers;
    string grams;

    cin.ignore();
    getline(cin, name);
    
    cin >> price >> disRate >> grams >> makers;

    Products[count] = new Product(name, price, disRate, grams, makers);
    count++;

}

int main() {

    ProductManager manager;
    int input;
    int i = 0;

    while (1) {
        cout << "1.Add 2.List 3.Quit > ";
        cin >> input;
        
        if (input == 1) {
            manager.addProduct();
        }
        else if (input == 2) manager.printAllProduct();
        else if (input == 3) break;
        else cout << "PLZ Enter vaild Number!\n";
    }
}