// Parameterized Constructor
#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    test(int a, int b) // a= 10 , b= 20 : constructor with default arguement.
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << this->a << endl
             << this->b << endl;
    }
};
int main()
{
    test t(10, 20);
    t.show();
}