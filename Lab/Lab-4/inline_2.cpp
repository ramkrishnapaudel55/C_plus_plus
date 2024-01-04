#include <iostream>

using namespace std;

inline int calculateArea(int length, int breadth) {
    return length * breadth;
}

int main() {
    int length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    int area = calculateArea(length, breadth);

    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}