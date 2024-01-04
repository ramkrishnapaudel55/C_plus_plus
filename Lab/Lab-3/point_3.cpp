#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    int getX(){
        return x;
    }

    int getY(){
        return y;
    }
};

int main() {
    Point p1(3, 4);
    Point p2(7, 9);

    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    return 0;
}
