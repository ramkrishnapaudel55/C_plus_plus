#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    void setData(int r, int i) {
        real = r;
        imag = i;
    }

    void showData() {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, sum;

    c1.setData(3, 4);
    c2.setData(5, 2);

    sum = c1 + c2;

    cout << "c1: ";
    c1.showData();

    cout << "c2: ";
    c2.showData();

    cout << "Sum: ";
    sum.showData();

    return 0;
}
