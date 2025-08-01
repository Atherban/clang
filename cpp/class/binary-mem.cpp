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

    void show()
    {
        cout << "Value = " << a << endl;
    }
    Test operator+(Test obj);
};

Test Test::operator+(Test obj)
{
    Test temp;
    temp.a = a + obj.a;
    return temp;
}

int main()
{
    Test t1, t2, t3;

    t1.setData(5);
    t2.setData(10);

    t3 = t1 + t2;

    t3.show();

    return 0;
}
