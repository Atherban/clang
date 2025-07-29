// WAP to demostarte the diamond ambiguity in hynrid inheritance with a exapmle
#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A called." << endl;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << "Constructor of B called." << endl;
    }
    void show()
    {
        cout << "This is class B function." << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "Constructor of C called." << endl;
    }
    void show()
    {
        cout << "This is class C function." << endl;
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
    cout << "Creating object of D " << endl;
    D obj;
    cout << "\nCalling show() function " << endl;
    obj.C::show();

    return 0;
}
