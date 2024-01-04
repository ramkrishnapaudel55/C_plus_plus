#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
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
    Parent* parentPtr;
    Child* childPtr;

    Parent parentObj;
    Child childObj;

    parentPtr = &parentObj;
    childPtr = &childObj;

    parentPtr->show();  // Calls the show() method of Parent class
    childPtr->show();   // Calls the show() method of Child class

    return 0;
}
