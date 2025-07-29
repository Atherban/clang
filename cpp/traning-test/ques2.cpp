// WAP to demonstrate working of Friend func
#include <iostream>
using namespace std;
class test
{
    int a;

public:
    friend void display(test); // friend function
};
void display(test obj)
{
    obj.a = 50;
    cout << obj.a;
}
int main()
{
    test t1;
    display(t1);
    return 0;
}
