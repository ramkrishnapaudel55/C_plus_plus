#include <iostream>
#include <string>
using namespace std;

class StringCompare {
private:
    string str;

public:
    StringCompare(const string& s) : str(s) {}

    bool operator==(const StringCompare& other) const {
        if(str == other.str){
            return 1;
        }else{
            return 0;
        }
    }
};

int main() {
    string input1, input2;

    cout << "Enter the first string: ";
    cin >> input1;

    cout << "Enter the second string: ";
    cin >> input2;

    StringCompare str1(input1);
    StringCompare str2(input2);

    if (str1 == str2) {
        cout << "The strings are identical." << endl;
    } else {
        cout << "The strings are not identical." << endl;
    }

    return 0;
}
