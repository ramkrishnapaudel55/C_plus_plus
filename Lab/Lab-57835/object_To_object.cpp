#include <iostream>
using namespace std;
class Product
{
    string name;
    float price;

public:
    string getName()
    {
        return name;
    }

    float getPrice()
    {
        return price;
    }
    Product(string n, float p)
    {
        name = n;
        price = p;
    }
    void show()
    {
        cout << "Product Name = " << name << endl;
        cout << "Product Price = " << price << endl;
    }
};
class Item
{
    string name;
    float price;
    int qty;

public:
    void show()
    {
        cout << "Item Name = " << name << endl;
        cout << "Item Price = " << price << endl;
        cout << "Item Qty = " << qty << endl;
    }
    void operator=(Product &p)
    {
        name = p.getName();
        price = p.getPrice();
        qty = 10;
    }
};

int main()
{
    Product p("Pen", 20.23);
    p.show();

    Item i;
    i = p;
    i.show();

    return 0;
}