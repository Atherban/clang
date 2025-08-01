//Constructor Overloading
#include <iostream>
using namespace std;

class test
{
    int a, b;

public:
    
    test()
    {
        a = 0;
        b = 0;
        cout << "Default Constructor called." << endl;
    }

    
    test(int x)
    {
        a = x;
        b = 0;
        cout << "Single Parameter Constructor called." << endl;
    }

    
    test(int x, int y)
    {
        a = x;
        b = y;
        cout << "Two Parameter Constructor called." << endl;
    }

    void display()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    test obj1;         
    test obj2(5);     
    test obj3(10, 20); 
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();
    cout << "Object 3: ";
    obj3.display();

    return 0;
}
