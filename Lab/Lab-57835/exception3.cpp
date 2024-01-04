#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    float c;
    try
    {
        if (b == 0)
        {
            throw runtime_error("Divide by zero error");
        }
        else
        {
            c = a / b;
            cout << "The value is: " << c << endl;
        }
    }
    catch (runtime_error &error)
    {
        cout << "Error ocurred" << endl;
        cout << error.what() << endl;
    }
    return 0;
}