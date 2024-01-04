#include<iostream>
using namespace std;
class Base1{
    public:
        Base1(){
            cout<<"Base1 class constructor called."<<endl;
        }
};
class Base2{
    public:
        Base2(){
            cout<<"Base2 class constructor called."<<endl;
        }
};
class Derived1{
    public:
        Derived1(){
            cout<<"Derived1 class constructor called."<<endl;
        }
};
class Derived2 : public Base1{ // Single inheritance
    public:
        Derived2(){
            cout<<"Derived2 class constructor called."<<endl;
        }
};
class Derived3 : public Derived2{
    public:
        Derived3(){
            cout<<"Derived3 class constructor called."<<endl;
        }
};
class Derived3_1 : public Derived3{ // Multilevel inheritance
    public:
        Derived3_1(){
            cout<<"Derived3_1 class constructor called."<<endl;
        }
};
class Derived4 : public Base2, public Derived1{  // Multiple inheritance
    public:
        Derived4(){
            cout<<"Derived4 class constructor called."<<endl;
        }
};
int main(){
    Derived2 d2;
    Derived3 d3;
    Derived4 d4;
    
    return 0;
}