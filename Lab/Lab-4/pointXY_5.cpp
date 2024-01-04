#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Point {
private:
    double x;
    double y;

public:
    Point(double _x = 0.0, double _y = 0.0) {
        x = _x;
        y = _y;
    }

    void display() {
        cout << "(" << fixed << setprecision(2) << x << ", " << fixed << setprecision(2) << y << ")";
    }

    double distanceTo(Point p) {
        double dx = p.x - x;
        double dy = p.y - y;
        return sqrt(dx * dx + dy * dy);
    }
};
int main() {
    Point point1(2.5, 3.7);
    Point point2(-1.8, 5.2);

    cout << "Point 1: ";
    point1.display();
    cout << endl;

    cout << "Point 2: ";
    point2.display();
    cout << endl;

    double distance = point1.distanceTo(point2);
    cout << "Distance between Point 1 and Point 2: " << fixed << setprecision(2) << distance << endl;
    return 0;
}
