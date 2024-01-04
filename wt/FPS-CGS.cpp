#include <iostream>
#include <cmath>
using namespace std;
struct distanceFPS {
    int feet;
    float inch;
};
struct distanceCGS {
    int meter;
    float cm;
};

int main() {
    distanceFPS d1;
    distanceCGS d2;
    
    cout << "Enter distance in feet and inch: " << endl;
    cin >> d1.feet >> d1.inch;
    
    // convert d1 to d2
    d2.meter = 0;
    d2.cm = (d1.feet * 30.48) + (d1.inch * 2.54);
    
    if (d2.cm > 100) {
        d2.meter += (int) (d2.cm / 100);
        d2.cm = fmod(d2.cm, 100);
    }
    
    cout << "Distance in FPS: " << d1.feet << " feet, " << d1.inch << " inches" << endl;
    cout << "Distance in CGS: " << d2.meter << " meters, " << d2.cm << " centimeters" << endl;
    
    return 0;
}
