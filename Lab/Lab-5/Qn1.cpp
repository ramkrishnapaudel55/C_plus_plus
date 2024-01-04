#include<iostream>
#include<string>
using namespace std;
class Person{
    protected:
        int id;
        string name;
        int age;
        string address;
    
    public:        
};
class Student: public Person{
    protected:
        string faculty;
        float fee;

    public:

};
class BEStudent: public Student{
    protected:
        string project;

    public:
        void setData(){
            cout<<"ID: ";
            cin>>id;
            cout<<"Name: ";
            cin>>name;
            cout<<"Age: ";
            cin>>age;
            cout<<"Address: ";
            cin>>address;
            cout<<"Faculty: ";
            cin>>faculty;
            cout<<"Fee: ";
            cin>>fee;
            cout<<"Project: ";
            cin>>project;
        }
        void showData(){
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Address: "<<address<<endl;
            cout<<"Faculty: "<<faculty<<endl;
            cout<<"Fee: "<<fee<<endl;
            cout<<"Project: "<<project<<endl;
        }
};
int main(){
    BEStudent s;
    s.setData();
    s.showData();
}
