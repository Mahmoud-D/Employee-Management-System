#include "EmployeeMangament.h";


#include <iostream>
//Constractor
Employee::Employee() {
    head = cursor = prev = NULL;
}
bool Employee::listIsEmpty() {
//	if(head == NULL)
//		return true;
//		else
//		return false;
    return (head == NULL);
}
bool Employee::cursorEmpty() {
//	if(cusror == NULL)
//		return true;
//		else
//		return false;
    return (cursor == NULL);
}
void Employee::toFirst() {
    cursor = head;
    prev = NULL;
}
void Employee::Advance() {
    prev = cursor;
    cursor = cursor->next;
}
bool Employee::atFirst() {
    return (cursor == head);
}
void Employee::toEnd() {
    toFirst();
    if(!listIsEmpty()) {
        while(cursor->next != NULL)
            Advance();
    }
}
bool Employee::atEnd() {
    if(listIsEmpty())
        return true;
    else if(cursorEmpty())
        return false;
    else
        return (cursor->next == NULL);
}
int Employee::listSize() {
    int count = 0;
    Node* p = head;
    toFirst();
    while(p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}
// Stores the head of the Linked List
//Node* head = new Node();

// Check Function to check that if
// Record Already Exist or Not
//bool check(int x)
//{
//	// Base Case
//	if (head == NULL)
//		return false;
//
//	Node* t = new Node;
//	t = head;
//
//	// Traverse the Linked List
//	while (t != NULL) {
//		if (t->roll == x)
//			return true;
//		t = t->next;
//	}
//
//	return false;
//}
bool Employee::search(const int &id) {
    bool found = false;
    toFirst();
    while(!cursorEmpty()){
        if(cursor->key == id) {
            found = true;
            return found;
        } else {
            Advance();
        }
    }
    return found;
}
// Function to insert the record
void Employee::Insert_Record(int id, string Name,
                             string Dept, int Salary)
{
    // if Record Already Exist
    if (search(id)) {
        cout << "Employee with this "
             << "record Already Exists\n";
        return;
    }

    // Create new Node to Insert Record
    Node* newNode = new Node();
    newNode->key = id;
    newNode->Name = Name;
    newNode->Dept = Dept;
    newNode->Salary = Salary;
    newNode->next = NULL;

    // Insert at Begin
    if (listIsEmpty() || (head->key >= newNode->key)) {
        newNode->next = head;
        head = newNode;
    }

        // Insert at middle or End
    else {
//		Node* c = head;
//		while (c->next != NULL
//			&& c->next->roll < t->roll) {
//			c = c->next;
//		}
//		t->next = c->next;
//		c->next = t;
        toEnd();
        cursor->next = newNode;
        prev = cursor;
        cursor = newNode;
    }
    cout << "Record Inserted "
         << "Successfully\n";
}

// Function to search record for any
// Employees Record with key number
void Employee::Search_Record(int id)
{
    // if head is NULL
    if (listIsEmpty()) {
        cout << "No such Record "
             << "Available\n";
        return;
    }

        // Otherwise
    else {
        Node* p = head;
        while (p != NULL) {
            if (p->key == id) {
                cout << "Id Number\t"
                     << p->key << endl;
                cout << "Name\t\t"
                     << p->Name << endl;
                cout << "Department\t"
                     << p->Dept << endl;
                cout << "Salary\t\t"
                     << p->Salary << endl;
                return;
            }
            p = p->next;
        }

        if (p == NULL)
            cout << "No such Record "
                 << "Available\n";
    }
}

// Function to delete record Employees
// record with given roll number
// if it exist
int Employee::Delete_Record(int id)
{
    Node* newNode = head;
    Node* p = NULL;

    // Deletion at Begin
    if (newNode != NULL
        && newNode->key == id) {
        head = newNode->next;
        delete newNode;

        cout << "Record Deleted "
             << "Successfully\n";
        return 0;
    }

    // Deletion Other than Begin
    while (newNode != NULL && newNode->key != id) {
        p = newNode;
        newNode = newNode->next;
    }
    if (newNode == NULL) {
        cout << "Record does not Exist\n";
        return -1;
        p->next = newNode->next;

        delete newNode;
        cout << "Record Deleted "
             << "Successfully\n";

        return 0;
    }
}

// Function to display the Employee's
// Record
void Employee::Show_Record()
{
    Node* p = head;
    if (p == NULL) {
        cout << "No Record "
             << "Available\n";
    }
    else {
        cout << "Index\tName\tDepartment"
             << "\tSalary\n";

        // Until p is not NULL
        while (p != NULL) {
            cout << p->key << " \t"
                 << p->Name << "\t"
                 << p->Dept << "\t"
                 << p->Salary << endl;
            p = p->next;
        }
    }
};
