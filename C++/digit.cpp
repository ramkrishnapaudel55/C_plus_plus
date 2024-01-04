#include <iostream>

using namespace std;

int main() {
    int number, digit, count = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a digit to count: ";
    cin >> digit;
    while (number > 0) {
        if (number % 10 == digit) {
            count++;
        }
        number /= 10;
    }
    cout << "The digit " << digit << " appears " << count << " times in the given number." << endl;
    return 0;
}
