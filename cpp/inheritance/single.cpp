#include <iostream>
using namespace std;

class Parent
{
public:
    void displayParent()
    {
        cout << "This is the Parent class." << endl;
    }
};

class Child : public Parent
{
public:
    void displayChild()
    {
        cout << "This is the Child class." << endl;
    }
};

int main()
{
    Child obj;

    obj.displayParent();
    obj.displayChild();

    return 0;
}
