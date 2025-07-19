// Default Arguments
#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a = 0, int b = 0, int c = 0)
    {
        return a + b + c;
    }
};

int main()
{
    Calculator calc;
    cout << "Sum with no arguments: " << calc.add() << endl;
    cout << "Sum with one argument: " << calc.add(5) << endl;
    cout << "Sum with two arguments: " << calc.add(5, 10) << endl;
    cout << "Sum with three arguments: " << calc.add(5, 10, 15) << endl;

    return 0;
}