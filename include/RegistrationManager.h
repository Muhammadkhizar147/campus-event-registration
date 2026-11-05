
#ifndef REGISTRATION_MANAGER_H
#define REGISTRATION_MANAGER_H

#include "Student.h"
#include <vector>
#include <string>

using namespace std;

class RegistrationManager
{
private:
    vector<Student> students;

public:
    bool registerStudent(string name, string reg, string workshop);

    void listRegistrations() const;

    bool searchRegistration(string reg) const;
};

#endif
