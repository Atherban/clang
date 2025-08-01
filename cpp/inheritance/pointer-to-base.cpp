#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class show function" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    Base *ptr; // Pointer to base class
    Derived d; // Object of derived class

    ptr = &d; // Base pointer points to derived object

    ptr->show(); // Calls Base class function because no virtual keyword

    return 0;
}
