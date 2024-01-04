#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal *dog = new Dog();
    Animal *cat = new Cat();

    dog->speak(); // Outputs: Woof!
    cat->speak(); // Outputs: Meow!

    delete dog;
    delete cat;

    return 0;
}
