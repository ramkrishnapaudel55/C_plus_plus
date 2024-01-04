#include<iostream>
#include<string>
using namespace std;
int numberOfCourse=3;
int i;
class Student{
private:
    string studentId;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[3];
    string degreeProgram;

public:

    Student(string studentId, string firstName, string lastName, string emailAddress,int daysToComplete[], int age, string degreeProgram){
        this->studentId=studentId;
        this->firstName=firstName;
        this->lastName=lastName;
        this->emailAddress=emailAddress;
        this->age=age;
        for(i=0;i<numberOfCourse;i++){
            this->daysToComplete[i]=daysToComplete[i];
        }
        this->degreeProgram=degreeProgram;
    }

    void setInfo(){
        cout<<"Enter Student Id: ";
        cin>>studentId;
        cout<<"Enter first name of the student : ";
        cin>>firstName;
        cout<<"Enter last name of the student : ";
        cin>>lastName;
        cout<<"Enter Email Address: ";
        cin>>emailAddress;
        cout<<"Enter Age: ";
        cin>>age;
         for(int i=0;i<numberOfCourse;i++){
            cout<<"Days to complete: \t"<<daysToComplete[i];
        }
        cout<<"Enter degreeProgram: ";
        cin>>degreeProgram;

    }
    void getInfo(){
        cout<<endl;
        cout<<"Student Id                   : "<<studentId<<endl;
        cout<<"First name of the student    : "<<firstName<<endl;
        cout<<"Last name of the student     : "<<lastName<<endl;
        cout<<"Email Address                : "<<emailAddress<<endl;
        cout<<"Age                          : "<<age<<endl;
        for(i=0;i<daysToComplete;i++){
            cout<<"Days to complete         : "<<daysToComplete[i]<<endl;
        }
        cout<<"DegreeProgram                : "<<degreeProgram<<endl;
    }


};

class Roster{

};

int main(){
    Student s1("A1","John","Smith","john1989@gmail.com",{30,35,40},"Security");
    Student s2("A2","Suzen","Erickson","erickson_1990@gmail.com",{50,30,40},"Network");
    Student s3("A3","Jack","Napoli","The_lawyer99yahoo.com",{20,40,33},"Software");
    Student s4("A4","Harendra","Bahubali","harendra@gmail.com",{50,58,40},"Security");
    Student s5("A5","Krishna","Paudel","ramkrishna@gmail.com",{30,35,40},"Software");

    s1.setInfo();
    s1.getInfo();

    return 0;
}