// WAP to add members of more than one classes using friend function
#include <iostream>
using namespace std;

class ClassB;
class ClassC;

class ClassA
{
    int num = 10;
    friend int addNumbers(ClassA, ClassB, ClassC);
};

class ClassB
{
    int num = 20;
    friend int addNumbers(ClassA, ClassB, ClassC);
};

class ClassC
{
    int num = 30;
    friend int addNumbers(ClassA, ClassB, ClassC);
};

int addNumbers(ClassA a, ClassB b, ClassC c)
{
    return a.num + b.num + c.num;
}

int main()
{
    ClassA objA;
    ClassB objB;
    ClassC objC;

    cout << "Total sum: " << addNumbers(objA, objB, objC);
    return 0;
}