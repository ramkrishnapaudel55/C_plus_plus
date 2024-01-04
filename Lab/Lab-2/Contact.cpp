#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    string email;
    string address;
};

int main() {
    Contact c;

    cout << "Enter contact information:\n";
    cout << "Name: ";
    getline(cin, c.name);
    cout << "Phone number: ";
    getline(cin, c.phoneNumber);
    cout << "Email: ";
    getline(cin, c.email);
    cout << "Address: ";
    getline(cin, c.address);

    cout << "\nContact information:\n";
    cout << "Name: " << c.name << endl;
    cout << "Phone number: " << c.phoneNumber << endl;
    cout << "Email: " << c.email << endl;
    cout << "Address: " << c.address << endl;

    return 0;
}
