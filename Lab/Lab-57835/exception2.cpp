#include <iostream>
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
            throw "Divide by zero error";
        }
        else
        {
            c = a / b;
            cout << "The value is: " << c << endl;
        }
    }
    catch (const char *e)
    {
        cout << "Error ocurred" << endl
             << e << endl;
    }
    return 0;
}