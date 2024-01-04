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

    int getHeight() const {
        return height;
    }
};

int main() {
    Mountain mountain1("Mount Everest", 8848, "Nepal");
    Mountain mountain2("K2", 8611, "Pakistan");

    cout << "Information of Mountain 1:" << endl;
    mountain1.displayInfo();
    cout << std::endl;

    cout << "Information of Mountain 2:" << endl;
    mountain2.displayInfo();
    cout << endl;

    if (mountain1.getHeight() > mountain2.getHeight()) {
        cout << "Mountain 1 has the greatest height." << endl;
        cout << "Information of the Mountain:" << endl;
        mountain1.displayInfo();
    } else {
        cout << "Mountain 2 has the greatest height." << endl;
        cout << "Information of the Mountain:" << endl;
        mountain2.displayInfo();
    }
    return 0;
}
