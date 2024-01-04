#include <iostream>

// Base class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }

    // Pure virtual function
    virtual void area() = 0; // No implementation provided, making it pure virtual.
};

// Derived class 1
class Circle : public Shape {
public:
    // Override draw function
    void draw() override {
        std::cout << "Drawing a circle." << std::endl;
    }

    // Implement the pure virtual function
    void area() override {
        std::cout << "Calculating circle's area." << std::endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    // Override draw function
    void draw() override {
        std::cout << "Drawing a rectangle." << std::endl;
    }

    // Implement the pure virtual function
    void area() override {
        std::cout << "Calculating rectangle's area." << std::endl;
    }
};

int main() {
    // Example using virtual functions
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw(); // Calls the overridden draw() in Circle class.
    shape2->draw(); // Calls the overridden draw() in Rectangle class.

    // Example using pure virtual function
    Shape* shape3 = new Circle();
    Shape* shape4 = new Rectangle();

    shape3->area(); // Calls the overridden area() in Circle class.
    shape4->area(); // Calls the overridden area() in Rectangle class.

    delete shape1;
    delete shape2;
    delete shape3;
    delete shape4;

    return 0;
}
