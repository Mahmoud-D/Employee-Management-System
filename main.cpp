#include "EmployeeMangament.h"

#include <iostream>

int main()
{
    Employee e1;
    string Name, Department;
    int id, Salary;

    // Menu-driven program
    while (true) {

        cout << "\n\t\tWelcome to Employee "
                "Management System\n\n\tPress\n\t1 to "
                "create a new Record\n\t2 to delete a "
                "Employee record\n\t3 to Search a Employee "
                "Record\n\t4 to view all Employees "
                "record\n\t5 to Exit\n";
        cout << "\nEnter your Choice\n";
        int Choice;

        // Enter Choice
        cin >> Choice;

        if (Choice == 1) {
            cout << "Enter Name of Employee\n";
            cin >> Name;
            cout << "Enter Id Number of Employee\n";
            cin >> id;
            cout << "Enter Department of Employee \n";
            cin >> Department;
            cout << "Enter Total Salary of Employee\n";
            cin >> Salary;
            e1.Insert_Record(id, Name, Department, Salary);
        }

        else if (Choice == 2) {
            cout << "Enter Id Number of Employee whose "
                    "record is to be deleted\n";
            cin >> id;
            e1.Delete_Record(id);
        }

        else if (Choice == 3) {
            cout << "Enter Id Number of Employee whose "
                    "record you want to Search\n";
            cin >> id;
            e1.Search_Record(id);
        }
        else if (Choice == 4) {
            e1.Show_Record();
        }
        else if (Choice == 5) {
            exit(0);
        }
        else {
            cout << "Invalid Choice "
                 << "Try Again\n";
        }
    }
    return 0;
}

