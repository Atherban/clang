// WAP to count number of objects in a class
#include <iostream>
using namespace std;

class Counter
{
public:
    static int count;
    Counter()
    {
        count++;
    }
};

int Counter::count = 0;

int main()
{
    Counter a, b, c;
    cout << "Number of objects: " << Counter::count;
    return 0;
}