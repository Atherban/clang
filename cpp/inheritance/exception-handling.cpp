#include <iostream>
using namespace std;

int main()
{
    int c, a = 10, b = 0;

    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << c;
        }
        else
        {
            throw b;
        }
    }
    catch (int n)
    {
        cout << "didvided by zero " << n << endl;
    }
    cout << "exeception";
    return 0;
}
