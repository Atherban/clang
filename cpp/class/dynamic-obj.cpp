#include <iostream>
using namespace std;

class Test
{
public:
    void add(int a, int b)
    {
        cout << "Sum: " << a + b << endl;
    }
};

int main()
{
    Test *t1 = new Test();
    t1->add(5, 3);
    return 0;
}