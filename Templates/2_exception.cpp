#include <iostream>
#include <string>

using namespace std;

int main() {
        int num1, num2, result;
        string input;

        cout << "Enter the first number: ";
        cin >> input;
        num1 = stoi(input);

        cout << "Enter the second number: ";
        cin >> input;
        num2 = stoi(input);

        try {
        if (num2 == 0) {
            throw runtime_error("Division by zero exception!");
        }

        if (num1 < 0 || num2 < 0) {
            throw runtime_error("Negative number exception!");
        }

        result = num1 / num2;
        cout << "Result of division: " << result << endl;
    } catch (const invalid_argument& ex) {
        cout << "Invalid input: " << ex.what() << endl;
    } catch (const runtime_error& ex) {
        cout << "Error: " << ex.what() << endl;
    } catch (...) {
        cout << "Unknown error occurred: "<< endl;
    }

    return 0;
}
