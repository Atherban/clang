#include <iostream>
using namespace std;

class Parent
{
public:
    void display()
    {
        cout << "Display of Parent class." << endl;
    }
};

class Child : public Parent
{
public:
    void display()
    {
        cout << "Display of Child class." << endl;
    }
};

int main()
{
    Parent p;
    Child c;

    cout << "Parent object:" << endl;
    p.display();

    cout << "Child object:" << endl;
    c.display();

    return 0;
}
