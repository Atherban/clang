#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    string msg = "error";

    try
    {
        if (b == 0)
            throw b;
        else if (a < 0)
            throw msg;
        else
            cout << a / b;
    }
    catch (int n)
    {
        cout << "Caught int exception: division by zero (" << n << ")" << endl;
    }
    catch (string s)
    {
        cout << "Caught string exception: " << s << endl;
    }

    cout << "\nProgram continues after exception handling." << endl;
    return 0;
}
