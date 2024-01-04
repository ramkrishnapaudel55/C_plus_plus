#include<iostream>
using namespace std;
class Person{
    protected:
        string name;

    public:
        void setName(string n){
            name=n;
        }
        void showName(){
            cout<<"Name : "<<name<<endl;
        }
};
class Student: public Person{
    private:
        int roll;

    public:
        void setRoll (int rollno){
            roll= rollno;
        }
        void showRoll (){
            cout<<"Roll No:"<< roll <<endl;
        }
};
int main(){
    Student s;
    s.setName("Andrew");
    s.setRoll(18);
    s.showName();
    s.showRoll();
    return 0;
}