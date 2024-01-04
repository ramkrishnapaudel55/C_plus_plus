#include <iostream>
using namespace std;

class Parent {
public:
    void show() {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent {
public:
    void show() {
        cout << "This is the Child class." << endl;
    }
};

int main() {
    Child obj;
    obj.show();  // Calls the show() method of Child class

    return 0;
}
