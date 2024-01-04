#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double distanceTo(const Point& otherPoint) const {
        double dx = x - otherPoint.x;
        double dy = y - otherPoint.y;
        return sqrt(dx*dx + dy*dy);
    }
};

int main() {
    Point p1(2.0, 3.0);
    Point p2(5.0, 7.0);

    double distance = p1.distanceTo(p2);
    cout << "Distance between the two points: " << distance << endl;

    return 0;
}
