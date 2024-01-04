#include<iostream>
using namespace std;

class Time{
    int hr, min, sec;

public:
    Time(int a) {
        hr = a / 3600;
        a = a % 3600;
        min = a / 60;
        sec = a % 60;
    }

    operator int() const {  // Conversion operator for object-to-primitive conversion
        return hr * 3600 + min * 60 + sec;
    }

    void show() {
        cout << hr << " : " << min << " : " << sec << endl;
    }
};

int main(){
    Time t(4440);
    t.show();

    int timeInSeconds = t;  // Object to primitive type conversion
    cout << "Time in seconds: " << timeInSeconds << endl;

    return 0;
}
