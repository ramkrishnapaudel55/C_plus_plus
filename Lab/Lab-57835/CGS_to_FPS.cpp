#include <iostream>
using namespace std;

class DistanceConverter
{
private:
    double cgsDistance; // Distance in centimeters

public:
    DistanceConverter(double cgsDist) : cgsDistance(cgsDist) {}

    double convertToMeter()
    {
        return cgsDistance / 100.0; // Convert cm to meter
    }

    void convertToFeetAndInches()
    {
        double meterDist = convertToMeter();
        double feet = meterDist * 3.28084;                                  // Convert meter to feet
        double totalInches = feet * 12.0;                                   // Convert feet to inches
        double remainingInches = totalInches - static_cast<int>(feet) * 12; // Get remaining inches

        cout << "Converted distance: " << feet << " feet " << remainingInches << " inches" << endl;
    }
};

int main()
{
    double cgsDistance;
    cout << "Enter distance in CGS (cm): ";
    cin >> cgsDistance;

    DistanceConverter converter(cgsDistance);
    converter.convertToFeetAndInches();

    return 0;
}
