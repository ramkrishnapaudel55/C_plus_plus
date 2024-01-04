#include <iostream>

using namespace std;

class Vector {
private:
    double x;
    double y;

public:
    Vector(double xVal, double yVal) : x(xVal), y(yVal) {}

    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    Vector operator-(const Vector& other) const {
        return Vector(x - other.x, y - other.y);
    }

    Vector operator*(double scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    friend ostream& operator<<(ostream& os, const Vector& vec);
};

ostream& operator<<(ostream& os, const Vector& vec) {
    os << "(" << vec.x << ", " << vec.y << ")";
    return os;
}

int main() {
    Vector v1(1.0, 2.0);
    Vector v2(3.0, 4.0);

    Vector v3 = v1 + v2;
    Vector v4 = v1 - v2;
    Vector v5 = v1 * 2.0;

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;
    cout << "v3 = v1 + v2: " << v3 << endl;
    cout << "v4 = v1 - v2: " << v4 << endl;
    cout << "v5 = v1 * 2.0: " << v5 << endl;

    return 0;
}
