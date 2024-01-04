#include <iostream>
using namespace std;
class Mountain {
private:
    string name;
    int height;
    string location;

public:
    Mountain(const string& mountainName, int mountainHeight, const string& mountainLocation)
        : name(mountainName), height(mountainHeight), location(mountainLocation) {}

    void displayInfo() const {
        cout << "Mountain Name: " << name << endl;
        cout << "Height: " << height << " meters" << endl;
        cout << "Location: " << location << endl;
    }

    bool cmpHeight(const Mountain& other) const {
        return height > other.height;
    }
};

int main() {
    Mountain mountain1("Mount Everest", 8848, "Nepal");
    Mountain mountain2("K2", 8611, "Pakistan");

    cout << "Information of Mountain 1:" << endl;
    mountain1.displayInfo();
    cout << endl;

    cout << "Information of Mountain 2:" << endl;
    mountain2.displayInfo();
    cout << endl;

    if (mountain1.cmpHeight(mountain2)) {
        cout << "Mountain 1 has the greatest height." << endl;
    } else {
        cout << "Mountain 2 has the greatest height." << endl;
    }

    return 0;
}
