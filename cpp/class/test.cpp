#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    void getdata(int a, int b)
    {
        cout << this << endl;
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << this << endl;
        cout << this->a << "\t" << this->b;
    }
};
int main()
{
    Test t1;
    t1.getdata(10, 20);
    t1.showdata();
    return 0;
}