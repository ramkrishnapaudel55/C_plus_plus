#include <iostream>
#include <string>
using namespace std;
class Product{
private:
        int productId;
        string productName;
        float productPrice;

public:
        Product(){
            productId=0;
            productName="null";
            productPrice=0.00;
        }
        Product(int id, string name, float price){
            productId=id;
            productName=name;
            productPrice=price;
        }
        Product(Product &p){
            productId=p.productId;
            productName=p.productName;
            productPrice=p.productPrice;
        }
        void showInfo(){
            cout<<productId<<"\t"<<productName<<"\t"<<productPrice<<endl;
        }
};

int main() {
    Product p;
    Product p1(1,"laptop",150000.55);
    Product p3(p);
    Product p4(p1);
    p.showInfo();
    p1.showInfo();
    p3.showInfo();
    p4.showInfo();
    return 0;
}
