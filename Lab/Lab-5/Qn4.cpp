#include<iostream>
using namespace std;
class Base{
    protected:
        string name;
    
    public:
        void display(){
            cout<<"Hello from base class."<<endl;
        }
};
class Derived : public Base{
    public:
        void display(){
            cout<<"Hello from Derived class."<<endl;
        }
};
int main(){
    Base b;
    Derived d;

    b.display();
    d.display();


    return 0;
}