#include <iostream>
#include <string>
using namespace std;
class Contact {
private:
    string name;
    string phoneNumber;
    string email;

public:
    void setName(const string& newName) {
        name = newName;
    }
    string getName() const {
        return name;
    }
    void setPhoneNumber(const string& newPhoneNumber) {
        phoneNumber = newPhoneNumber;
    }
    string getPhoneNumber() const {
        return phoneNumber;
    }
    void setEmail(const string& newEmail) {
        email = newEmail;
    }
    string getEmail() const {
        return email;
    }
};

int main() {
    Contact c;
    c.setName("Osama Bin Laden");
    c.setPhoneNumber("9847357835");
    c.setEmail("osamabinladen911.idol@gmail.com");

    cout << "Name         : " << c.getName() << endl;
    cout << "Phone Number : " << c.getPhoneNumber() << endl;
    cout << "Email        : " << c.getEmail() << endl;

    return 0;
}
