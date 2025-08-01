#include <iostream>
using namespace std;

class Test
{
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    friend Test operator+(Test t1, Test t2);

    void show()
    {
        cout << "Value = " << a << endl;
    }
};

Test operator+(Test t1, Test t2)
{
    Test temp;
    temp.a = t1.a + t2.a;
    return temp;
}

int main()
{
    Test t1, t2, t3;

    t1.setData(7);
    t2.setData(8);

    t3 = t1 + t2;

    t3.show();

    return 0;
}
