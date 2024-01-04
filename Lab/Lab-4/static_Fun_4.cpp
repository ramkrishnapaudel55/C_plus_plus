#include <iostream>
using namespace std;

class MyClass {
public:
    static void displayInfo() {
        int a=1,b=2;
        cout << a+b << endl;
    }
};

int main() {
    MyClass::displayInfo();
    return 0;
}