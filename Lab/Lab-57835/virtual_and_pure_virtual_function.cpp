#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }

    virtual void calculateArea() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }

    void calculateArea() override {
        cout << "Calculating circle area." << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }

    void calculateArea() override {
        cout << "Calculating square area." << endl;
    }
};

int main() {
    Circle circle;
    Square square;

    // Shape *shape1 = new Circle;
    // Shape *shape2 = new Square;

    Shape* shape1 = &circle;
    Shape* shape2 = &square;


    shape1->draw();          // Calls Circle's overridden function
    shape1->calculateArea(); // Calls Circle's overridden function

    shape2->draw();          // Calls Square's overridden function
    shape2->calculateArea(); // Calls Square's overridden function

    delete shape1;
    delete shape2;
    return 0;
}
