#include<iostream>
using namespace std;
class Parent{
    public:
    void show(){
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
   Child c;
   c.show();

    return 0;
}