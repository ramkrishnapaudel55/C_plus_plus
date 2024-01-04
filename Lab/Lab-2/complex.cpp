#include <iostream>
using namespace std;

struct complex {
    double real;
    double imaginary;
};

int main() {
    complex c1, c2, sum, product;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> c1.real >> c1.imaginary;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> c2.real >> c2.imaginary;

    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;

    product.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    product.imaginary = c1.real * c2.imaginary + c2.real * c1.imaginary;

    cout << "Sum of the two complex numbers: " << sum.real << " + " << sum.imaginary << "i" << endl;
    cout << "Product of the two complex numbers: " << product.real << " + " << product.imaginary << "i" << endl;

    return 0;
}
