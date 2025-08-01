#include <iostream>
using namespace std;

class test
{
    int data;

public:
    // Parameterized Constructor
    test(int value)
    {
        data = value;
        cout << "Parameterized Constructor called." << endl;
    }

    // Copy Constructor
    test(const test &t)
    {
        data = t.data;
        cout << "Copy Constructor called." << endl;
    }

    void display()
    {
        cout << "Data = " << data << endl;
    }
};

int main()
{
    test t1(10);    // Parameterized constructor
    test t2 = t1; // Copy constructor

    cout << "tect 1: ";
    t1.display();

    cout << "tect 2: ";
    t2.display();

    return 0;
}
