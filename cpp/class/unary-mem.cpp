// Unary operator overloading using memeber func.
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

    void operator++();
};

void test::operator++()
{
    ++a;
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
