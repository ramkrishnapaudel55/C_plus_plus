#include <iostream>
#include <string>
using namespace std;

const int NUM_COURSES = 3;

class Student {
private:
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int daysToComplete[NUM_COURSES];
    string degreeProgram;

public:
    Student(string studentID, string firstName,string lastName,
            string emailAddress, int age, int daysToComplete[],string degreeProgram) {
        this->studentID = studentID;
        this->firstName = firstName;
        this->lastName = lastName;
        this->emailAddress = emailAddress;
        this->age = age;
        for (int i = 0; i < NUM_COURSES; i++) {
            this->daysToComplete[i] = daysToComplete[i];
        }
        this->degreeProgram = degreeProgram;
            }
    string getStudentID() const {
        return studentID;
    }

    string getFirstName() const {
        return firstName;
    }

    string getLastName() const {
        return lastName;
    }

    string getEmailAddress() const {
        return emailAddress;
    }

    int getAge() const {
        return age;
    }

    int* getDaysToComplete() {
        return daysToComplete;
    }

    string getDegreeProgram() const {
        return degreeProgram;
    }

    void print() const {
        cout << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
                  << "\tAge: " << age << "\tdaysInCourse: {";
        for (int i = 0; i < NUM_COURSES; i++) {
            cout << daysToComplete[i];
            if (i < NUM_COURSES - 1) {
                cout << ", ";
            }
        }
        cout << "}\tDegree Program: " << degreeProgram << endl;
    }
};

class Roster {
private:
    int rosterSize;
    Student** classRosterArray;

public:
    Roster() {
        rosterSize = 0;
        classRosterArray = nullptr;
    }
    void addStudent(Student* student) {
        if (student == nullptr) {
            return;
        }

        Student** newRosterArray = new Student*[rosterSize + 1];

        for (int i = 0; i < rosterSize; i++) {
            newRosterArray[i] = classRosterArray[i];
        }

        newRosterArray[rosterSize] = student;

        delete[] classRosterArray;
        classRosterArray = newRosterArray;
        rosterSize++;
    }

    void removeStudent(string studentID) {
        bool found = false;
        for (int i = 0; i < rosterSize; i++) {
            if (classRosterArray[i]->getStudentID() == studentID) {
                found = true;
                for (int j = i; j < rosterSize - 1; j++) {
                    classRosterArray[j] = classRosterArray[j + 1];
                }
                rosterSize--;
                break;
            }
        }

        if (!found) {
            cout << "Student with ID " << studentID << " not found in the roster." << endl;
        }
    }
    void printAll() const {
        for (int i = 0; i < rosterSize; i++) {
            classRosterArray[i]->print();
        }
    }
};

int main() {
    int studentData[NUM_COURSES] = {30, 45, 60};

    Student student1("A1", "John", "Smith", "john.doe@example.com", 25, studentData, "Mathematics");
    Student student2("A2", "Suzan", "Erickson", "jane.smith@example.com", 23, studentData, "Computer Science");
    Student student3("A3", "Jack", "Napoli", "bob.johnson@example.com", 28, studentData, "Engineering");
    Student student4("A4", "Erin", "Black", "alice.williams@example.com", 21, studentData, "Physics");
    Student student5("A5", "Ramkrishna","poudel","ramkrishna@emample.com", 22, studentData, "Biology");

    Roster roster;
    roster.addStudent(&student1);
    roster.addStudent(&student2);
    roster.addStudent(&student3);
    roster.addStudent(&student4);
    roster.addStudent(&student5);


    cout << "All students in the roster:\n";
    roster.printAll();

    string studentIDToRemove = "003";
    roster.removeStudent(studentIDToRemove);

    cout << "\nAll students after removing " << studentIDToRemove << ":\n";
    roster.printAll();

    return 0;
}
