#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:
    Person() {
        name = "";
        age = 0;
        address = "";
    }

    Person(string n, int a, string ad) {
        name = n;
        age = a;
        address = ad;
    }

    void displayInformation() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    Person person1;  // Using default constructor
    Person person2("John Doe", 25, "123 Main St"); 

    cout << "Person 1:" << endl;
    person1.displayInformation();
    cout << endl;

    cout << "Person 2:" << endl;
    person2.displayInformation();
    cout << endl;

    return 0;
}