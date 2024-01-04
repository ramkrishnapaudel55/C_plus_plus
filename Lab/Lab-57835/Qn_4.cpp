#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void show(){
        cout<<"Hello I am the member function of the parent class "<<endl;
    }
    
};
class Child: public Parent{
    public:
    void show(){
        cout<<"Hello I am the member function of the child class "<<endl;
    }
    
};

int main(){
    Parent *pPtr;
    Child *cPtr;

    Parent p;
    Child c;

    pPtr = &c;
    pPtr ->   show();

    return 0;
}