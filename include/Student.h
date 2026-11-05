
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student
{
private:
    string name;
    string registrationNumber;
    string workshop;

public:
    Student(string n, string reg, string work);

    string getName() const;
    string getRegistrationNumber() const;
    string getWorkshop() const;

    void display() const;
};

#endif
