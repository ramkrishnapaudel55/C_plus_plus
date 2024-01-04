#include <iostream>
using namespace std;

struct Time {
    int hr, min, sec;
};
int main() {
    Time t1, t2, sum;
    cout << "Enter time 1 (HH:MM:SS): ";
    cin>>t1.hr>>t1.min>>t1.sec;
    

    cout << "Enter time 2 (HH:MM:SS): ";
    cin>>t2.hr>>t2.min>>t2.sec;

    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min + (sum.sec / 60);
    sum.hr = t1.hr + t2.hr + (sum.min / 60);
    sum.min = sum.min % 60;
    sum.sec = sum.sec % 60;

    cout << "Sum of times: " << sum.hr << ":" << sum.min << ":" << sum.sec << endl;
    return 0;
}
