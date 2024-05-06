// Header File
#include <iostream>
using namespace std;

class Employee {
// data member
private:
    // Node Class
    class Node {
    public:
        int key;
        string Name;
        string Dept;
        int Salary;
        Node* next;
    };
    Node *head, *prev, *cursor;

// function member
public:
//Constractor
    Employee();
    bool listIsEmpty();
    bool cursorEmpty();
    void toFirst();
    void Advance();
    bool atFirst();
    void toEnd();
    bool atEnd();
    int listSize();
    bool search(const int &id);
// Function to insert the record
    void Insert_Record(int id, string Name,	string Dept, int Salary);
    int Delete_Record(int id);
// Function to display the Employee's
    void Search_Record(int id);
// Record
    void Show_Record();
};
