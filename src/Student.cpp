
#include "../include/Student.h"
#include <iostream>

using namespace std;

Student::Student(string n, string reg, string work)
{
    name = n;
    registrationNumber = reg;
    workshop = work;
}

string Student::getName() const
{
    return name;
}

string Student::getRegistrationNumber() const
{
    return registrationNumber;
}

string Student::getWorkshop() const
{
    return workshop;
}

void Student::display() const
{
    cout << "\nStudent Name: " << name << endl;
    cout << "Registration Number: "
         << registrationNumber << endl;
    cout << "Workshop: " << workshop << endl;
}
