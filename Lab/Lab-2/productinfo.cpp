#include <iostream>
#include <string>

using namespace std;

struct Product {
    int productId;
    string productName;
    float productPrice;
    int productQty;
    string productSpecs;
};

int main() {
    Product p;

    cout << "Enter product information:\n";
    cout << "Product ID: ";
    cin >> p.productId;
    cout << "Product name: ";
    cin.ignore();
    getline(cin, p.productName);
    cout << "Product price: ";
    cin >> p.productPrice;
    cout << "Product quantity: ";
    cin >> p.productQty;
    cout << "Product specifications: ";
    cin.ignore();
    getline(cin, p.productSpecs);

    cout << "\nProduct information:\n";
    cout << "Product ID: " << p.productId << endl;
    cout << "Product name: " << p.productName << endl;
    cout << "Product price: " << p.productPrice << endl;
    cout << "Product quantity: " << p.productQty << endl;
    cout << "Product specifications: " << p.productSpecs << endl;

    return 0;
}
