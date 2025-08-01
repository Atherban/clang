// Virtual Function
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "Derived class display function" << endl;
    }
};

int main()
{
    Base *ptr; // Base class pointer
    Derived d; // Derived class object

    ptr = &d; // Pointing base pointer to derived object

    ptr->display();

    return 0;
}
