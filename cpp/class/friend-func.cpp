// Friend Function
#include <iostream>
using namespace std;
class test
{
    int a;

public:
    void show();               // member function
    friend void display(test); // friend function
};
void test::show()
{
    a = 10;
    cout << a << endl;
}
void display(test t1)
{
    t1.a = 50;
    cout << t1.a;
}
int main()
{
    test t1;
    t1.show();
    display(t1);
    return 0;
}