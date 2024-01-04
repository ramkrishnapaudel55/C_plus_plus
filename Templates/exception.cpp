#include <iostream>
#include <stdexcept>
using namespace std;

double divideNumbers(double a, double b) {
    if (b == 0.0) {
        throw invalid_argument("Division by zero is not allowed.");
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    cout << "Enter two numbers for division: ";
    cin >> num1 >> num2;

    try {
        result = divideNumbers(num1, num2);
        cout << "Result of division: " << result << endl;
    } 
    catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
