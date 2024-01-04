#include <iostream>
using namespace std;

int getSum(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0) {
    return a + b + c + d + e;
}

int main() {
    cout << "getSum(): " << getSum() << endl;
    cout << "getSum(1): " << getSum(1) << endl;
    cout << "getSum(1, 2): " << getSum(1, 2) << endl;
    cout << "getSum(1, 2, 3): " << getSum(1, 2, 3) << endl;
    cout << "getSum(1, 2, 3, 4): " << getSum(1, 2, 3, 4) << endl;
    cout << "getSum(1, 2, 3, 4, 5): " << getSum(1, 2, 3, 4, 5) << endl;
    return 0;
}
