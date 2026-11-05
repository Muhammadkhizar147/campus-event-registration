
#include "../include/RegistrationManager.h"
#include <iostream>

using namespace std;

bool RegistrationManager::registerStudent(
    string name,
    string reg,
    string workshop)
{
    if (name.empty() || reg.empty() || workshop.empty())
    {
        cout << "\nError: All fields are required!\n";
        return false;
    }

    for (const Student& student : students)
    {
        if (student.getRegistrationNumber() == reg)
        {
            cout << "\nError: Registration number already exists!\n";
            return false;
        }
    }

    Student newStudent(name, reg, workshop);

    students.push_back(newStudent);

    cout << "\nRegistration successful!\n";

    return true;
}

void RegistrationManager::listRegistrations() const
{
    if (students.empty())
    {
        cout << "\nNo registrations found.\n";
        return;
    }

    cout << "\n===== REGISTERED PARTICIPANTS =====\n";

    for (const Student& student : students)
    {
        student.display();
        cout << "--------------------------\n";
    }
}
bool RegistrationManager::searchRegistration(string reg) const
{
    for (const Student& student : students)
    {
        if (student.getRegistrationNumber() == reg)
        {
            cout << "\n===== STUDENT FOUND =====\n";
            student.display();
            return true;
        }
    }

    cout << "\nError: Registration record not found!\n";
    return false;
}


