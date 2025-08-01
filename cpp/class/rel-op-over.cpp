#include <iostream>
#include <string>
using namespace std;

class test
{
    string str;

public:
    test(string s = "")
    {
        str = s;
    }

    bool operator==(test obj)
    {
        return str == obj.str;
    }
};

int main()
{
    test t("hello");
    test t2("hello");

    if (t == t2)
        cout << "Strings are equal" << endl;
    else
        cout << "Strings are not equal" << endl;

    return 0;
}
