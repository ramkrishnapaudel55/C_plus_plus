#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real, double imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    Complex operator+(const Complex& other) const {
        double sumReal = real + other.real;
        double sumImaginary = imaginary + other.imaginary;
        return Complex(sumReal, sumImaginary);
    }

    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex num1(2.5, 3.7);
    Complex num2(1.8, 4.2);

    Complex sum = num1 + num2;

    cout << "Number 1: ";
    num1.display();

    cout << "Number 2: ";
    num2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
