#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine engine;

public:
    void start_car() {
        engine.start();
    }
};

int main() {
    Car car;
    car.start_car(); // Outputs: Engine started

    return 0;
}
