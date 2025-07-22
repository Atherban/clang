#include <iostream>
using namespace std;

class base
{
    int a; // private: not accessible in derived

protected:
    int b; // accessible in derived

public:
    int c; // accessible in derived
};

class derived : public base
{
    int d = 20; // initialize for demonstration

public:
    void show()
    {
        // a = 10; // can't access private member
        b = 60; // accessing protected member
        c = 40; // accessing public member
        cout << "d + b = " << d + b << endl;
    }
};

int main()
{
    derived d;
    d.show(); // now accessible since show() is public
    return 0;
}
