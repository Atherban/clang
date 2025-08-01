#include <iostream>
using namespace std;

class Test
{
    int num;

public:
    Test(int n = 0)
    {
        num = n;
    }

    void operator-()
    {
        num = -num;
    }

    friend istream &operator>>(istream &in, Test &t);

    friend ostream &operator<<(ostream &out, const Test &t);
};

istream &operator>>(istream &in, Test &t)
{
    cout << "Enter number: ";
    in >> t.num;
    return in;
}

ostream &operator<<(ostream &out, const Test &t)
{
    out << "Value: " << t.num;
    return out;
}

int main()
{
    Test t;

    cin >> t;
    cout << "Original: " << t << endl;

    -t;

    cout << "After Unary Minus: " << t << endl;

    return 0;
}
