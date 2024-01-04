#include <iostream>
using namespace std;
class Addition {
public:
    void getSum() {
        cout << "No arguments provided." << endl;
    }

    void getSum(int a) {
        cout << "getSum(int a) called with argument: " << a <<  endl;
    }

    void getSum(int a, int b) {
        cout << "getSum(int a, int b) called with arguments: " << a << ", " << b << endl;
    }

    void getSum(int a, float b) {
        cout << "getSum(int a, float b) called with arguments: " << a << ", " << b <<   endl;
    }

    void getSum(float a, float b) {
        cout << "getSum(float a, float b) called with arguments: " << a << ", " << b << endl;
    }
};

int main() {
    Addition obj;
    obj.getSum();                // No arguments provided
    obj.getSum(5);               // getSum(int a) called with argument: 5
    obj.getSum(2, 3);            // getSum(int a, int b) called with arguments: 2, 3
    obj.getSum(4, 2.5f);         // getSum(int a, float b) called with arguments: 4, 2.5
    obj.getSum(1.5f, 2.5f);      // getSum(float a, float b) called with arguments: 1.5, 2.5

    return 0;
}
