#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;

public:
    void getData()
    {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter NAME: ";
        cin >> name;
    }

    void showData() const
    {
        cout << "Employee Details:" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{

    Employee emp;
    Employee *p = &emp;
    p->getData();
    p->showData();

    return 0;
}