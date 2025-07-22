#include <iostream>
using namespace std;

class Person
{
protected:
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter Person ID: ";
        cin >> id;
        cout << "Enter Person Name: ";
        cin >> name;
    }

    void showData()
    {
        cout << "Person ID: " << id << ", Name: " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int empId;
    float empSalary;

public:
    void getData()
    {
        Person::getData();
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Salary: ";
        cin >> empSalary;
    }

    void showData()
    {
        Person::showData();
        cout << "Employee ID: " << empId << ", Salary: " << empSalary << endl;
    }
};

class Student : public Person
{
protected:
    int rollNo;
    float marks;

public:
    void getData()
    {
        Person::getData();
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void showData()
    {
        Person::showData();
        cout << "Roll Number: " << rollNo << ", Marks: " << marks << endl;
    }
};

class Manager : public Employee
{
protected:
    int mgrId;
    int deptId;

public:
    void getData()
    {
        Employee::getData();
        cout << "Enter Manager ID: ";
        cin >> mgrId;
        cout << "Enter Department ID: ";
        cin >> deptId;
    }

    void showData()
    {
        Employee::showData();
        cout << "Manager ID: " << mgrId << ", Department ID: " << deptId << endl;
    }
};

int main()
{
    cout << "\n--- Enter Student Data ---" << endl;
    Student s;
    s.getData();
    cout << "\n--- Displaying Student Data ---" << endl;
    s.showData();

    cout << "\n--- Enter Employee Data ---" << endl;
    Employee e;
    e.getData();
    cout << "\n--- Displaying Employee Data ---" << endl;
    e.showData();

    cout << "\n--- Enter Manager Data ---" << endl;
    Manager m;
    m.getData();
    cout << "\n--- Displaying Manager Data ---" << endl;
    m.showData();

    return 0;
}
