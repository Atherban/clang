// Unary operator overloading using friend func.
#include <iostream>
using namespace std;

class test
{
    int a;

public:
    void getData()
    {
        cout << "Enter number: ";
        cin >> a;
    }

    void show()
    {
        cout << "Value = " << a << endl;
    }

    friend void operator++(test &t);
};

void operator++(test &t)
{
    ++t.a;
}

int main()
{
    test t;
    t.getData();

    cout << "Before increment: ";
    t.show();

    ++t;

    cout << "After increment: ";
    t.show();

    return 0;
}
