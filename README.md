# Employee Management System
This project is a simple C++ application that manages employee records using a singly linked list data structure. It allows adding, deleting, searching, and displaying employee records.

## How it Works
The main class, Employee, contains a nested Node class that represents an employee record. Each Node contains the employee's ID, name, department, salary, and a pointer to the next Node in the list.

The Employee class also contains a number of methods for managing the list:

Insert_Record(int id, string Name, string Dept, int Salary): Inserts a new employee record into the list.
Delete_Record(int id): Deletes an employee record from the list.
Search_Record(int id): Searches for an employee record in the list.
Show_Record(): Displays all employee records in the list.
## Usage
Here's an example of how to use the Employee class:
```
Employee e1;
- ![#f03c15] string Name, Department;
int id, Salary;

// Insert a new record
cout << "Enter Name of Employee\n";
cin >> Name;
cout << "Enter Id Number of Employee\n";
cin >> id;
cout << "Enter Department of Employee \n";
cin >> Department;
cout << "Enter Total Salary of Employee\n";
cin >> Salary;
e1.Insert_Record(id, Name, Department, Salary);

// Delete a record
cout << "Enter Id Number of Employee whose record is to be deleted\n";
cin >> id;
e1.Delete_Record(id);

// Search for a record
cout << "Enter Id Number of Employee whose record you want to Search\n";
cin >> id;
e1.Search_Record(id);

// Display all records
e1.Show_Record();
```


## Data Structures
This project uses the concept of a **singly linked list**, which is a fundamental data structure in computer science. In this case, the linked list is used to store and manage the employee records.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

