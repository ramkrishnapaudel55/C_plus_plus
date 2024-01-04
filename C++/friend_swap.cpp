#include <iostream>
using namespace std;
class ClassB;
class ClassA
{
private:
    int value;

public:
    ClassA(int val)
    {
        value = val;
    }
    void setValue(int val)
    {
        value = val;
    }
    int getValue()
    {
        return value;
    }
    friend void swapValues(ClassA &objA, ClassB &objB);
    friend void swapValues(ClassA &objA, ClassB &objB);
};

class ClassB
{
private:
    int value;

public:
    ClassB(int val)
    {
        value = val;
    }
    void setValue(int val)
    {
        value = val;
    }
    int getValue()
    {
        return value;
    }
    friend void swapValues(ClassA &objA, ClassB &objB);
};

void swapValues(ClassA &objA, ClassB &objB)
{
    int temp = objA.value;
    objA.value = objB.value;
    objB.value = temp;
}

int main()
{
    ClassA objA(5);
    ClassB objB(10);
    cout << "Before swapping: " << objA.getValue() << " " << objB.getValue() << endl;
    swapValues(objA, objB);
    cout << "After swapping: " << objA.getValue() << " " << objB.getValue() << endl;
    return 0;
}
