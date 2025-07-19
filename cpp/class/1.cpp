#include <iostream>
using namespace std;
class test
{
    int a, b;

public:
    void show()
    {
        cout << "Enter value of a and b : ";
        cin >> a >> b;
    }
    void showData()
    {
        cout << a << "\t" << b;
    }
};
int main()
{
    test t1;
    t1.show();
    t1.showData();
    return 0;
}