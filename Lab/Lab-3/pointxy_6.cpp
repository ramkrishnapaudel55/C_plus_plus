#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double x;
    double y;

public:
    Point(double xVal, double yVal){
        x=xVal;
        y=yVal;
        }

    double calculateDistance(const Point& otherPoint) const {
        double dx = x - otherPoint.x;
        double dy = y - otherPoint.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    Point point1(3.0, 4.0);
    Point point2(6.0, 8.0);

    double distance = point1.calculateDistance(point2);
    cout << "Distance between the two points: " << distance << endl;

    return 0;
}
