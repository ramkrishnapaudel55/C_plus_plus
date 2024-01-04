#include <iostream>
using namespace std;

class Shape
{
public:
    void draw()
    {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

int main()
{

    Circle circle;
    circle.draw();

    return 0;
}
