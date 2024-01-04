#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0)
        {
            throw runtime_error("Division by zero");
        }

        int result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const exception &e)
    {
        cerr << "Exception: " << e.what() << endl;
    }

    return 0;
}
