#include <iostream>
using namespace std;

template <class T>
T factorial(T n)
{
    T fact = 1;
    for (T i = 1; i <= n; ++i)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int num1 = 5;
    int num2 = 6;

    cout << "Factorial of " << num1 << " is " << factorial(num1) << endl;
    cout << "Factorial of " << num2 << " is " << factorial(num2) << endl;

    return 0;
}
