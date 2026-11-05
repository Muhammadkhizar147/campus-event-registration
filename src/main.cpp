
#include <iostream>
#include <limits>
#include "../include/RegistrationManager.h"

using namespace std;

int main()
{
    RegistrationManager manager;

    int choice;

    do
    {
        cout << "\n================================\n";
        cout << " CAMPUS EVENT REGISTRATION SYSTEM\n";
        cout << "================================\n";

        cout << "1. Register Student\n";
        cout << "2. List All Registrations\n";
        
        cout << "3. Exit\n";

        cout << "\nEnter your choice: ";

        if (!(cin >> choice))
        {
            cout << "\nInvalid input! Enter a number.\n";

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice)
        {
            case 1:
            {
                string name, reg, workshop;

                cout << "\nEnter Student Name: ";
                getline(cin, name);

                cout << "Enter Registration Number: ";
                getline(cin, reg);

                cout << "Enter Workshop Name: ";
                getline(cin, workshop);

                manager.registerStudent(name, reg, workshop);

                break;
            }

            case 2:
            {
                manager.listRegistrations();
                break;
            }

        

            case 3:
            {
                cout << "\nExiting application. Goodbye!\n";
                break;
            }

            default:
            {
                cout << "\nInvalid choice! Try again.\n";
            }
        }

    } while (choice != 3);

    return 0;
}
