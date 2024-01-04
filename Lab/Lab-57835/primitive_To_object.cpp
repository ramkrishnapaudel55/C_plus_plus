#include<iostream>
using namespace std;

class Time{
    int hr,min,sec;

    public:
        void show(){
            cout<<hr<<" : "<<min<<" : "<<sec<<endl;
        }
       void operator=(int a){
            hr=a/3200;
            a=a%3600;
            min=a/60;
            sec=a%60;
        }

};

int main(){
    Time t;
    t=(4440);
    t.show();


    return 0;
}

