#include <iostream>
using namespace std;
class test
{
    static int a;
    int b; // convert it to static also

public:
    static void show()
    {
        test t1;
        a = 10;
        t1.b = 20;
        cout << a + t1.b;
    }
};
int test::a;
int main()
{
    test::show();
    return 0;
}