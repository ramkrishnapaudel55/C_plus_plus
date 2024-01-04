#include<iostream>
using namespace std;

struct DistanceFPS {
    int feet, inch;
};

struct DistanceCGS {
    int meter, cm;
};

int main() {
    DistanceFPS d1;
    DistanceCGS d2;
    
    cout << "Enter distance in feet and inches: ";
    cin >> d1.feet >> d1.inch;
    
    float totalInches = d1.feet * 12 + d1.inch;
    float meters = totalInches * 0.0254;
    d2.meter = int(meters);
    d2.cm = int((meters - d2.meter) * 100);

    cout << "Distance in feet and inches: " << d1.feet << "' " << d1.inch << "\"" << endl;
    cout << "Distance in meters and centimeters: " << d2.meter << "m " << d2.cm << "cm" << endl;

    if (totalInches > meters * 39.37) {
        cout << "The distance in feet and inches is greater." << endl;
    } else {
        cout << "The distance in meters and centimeters is greater." << endl;
    }
    return 0;
}
