#include <iostream>
using namespace std;

template<typename T>
class Template {
public:
    T getSum() {
        cout << "No argument" << endl;
        return T();
    }

    T getSum(T a, T b) {
        return a + b;
    }

    T getSum(T a, T b, T c) {
        return a + b + c;
    }
};

int main() {
    Template<int> t;
    cout << "Sum: " << t.getSum() << endl;
    cout << "Sum: " << t.getSum(5, 5) << endl;
    cout << "Sum: " << t.getSum(5, 3, 2) << endl;

    return 0;
}
