#include <iostream>
using namespace std;
class Time{
private:
        int hr;
        int min;
        int sec;
public:
        Time(){
            hr=0;
            min=0;
            sec=0;
        }
        Time(int h, int m, int s){
            hr=h;
            min=m;
            sec=s;
        }
        Time(Time &t){
            hr=t.hr;
            min=t.min;
            sec=t.sec;
        }
        void showTime(){
            cout<<hr<<":"<<min<<":"<<sec<<endl;
        }
};

int main() {
    Time t;
    Time t1(5,30,45);
    Time t3(t);
    Time t4(t1);
    t.showTime();
    t1.showTime();
    t3.showTime();
    t4.showTime();
    return 0;
}
