#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A called." << endl;
    }

    void show()
    {
        cout << "This is class A function." << endl;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of B called." << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of C called." << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "Constructor of D called." << endl;
    }
};

int main()
{
    cout << "--- Creating object of D ---" << endl;
    D obj;

    cout << "\n--- Calling show() function ---" << endl;
    obj.show();

    return 0;
}
