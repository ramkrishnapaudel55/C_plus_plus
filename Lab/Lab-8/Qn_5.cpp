#include <iostream>
using namespace std;

template<typename T1,typename T2>
void printValue(T1 a,T2 b) {
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int main() {
    int integer = 10;
    double doubleVal = 3.14;
    string stringVal = "Hello";

    // printValue(integer,doubleVal);
    // printValue(doubleVal,integer);
    // printValue(stringVal,doubleVal);

    printValue(10,3.14);
    printValue(3.14,10);
    printValue("Hello",3.14);

    return 0;
}
