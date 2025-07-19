// Passing object as a parameter and returning a object
#include <iostream>
using namespace std;

class test
{
    int a;

public:
    void getData()
    {
        cout << "Enter value : " << endl;
        cin >> a;
    }
    test sum(test t1, test t2)
    {
        test temp;
        temp.a = t1.a + t2.a;
        return temp;
    }
    void show()
    {
        cout << "Sum : " << a;
    }
};

int main()
{
    test t1, t2;
    t1.getData();
    t2.getData();
    t1 = t1.sum(t1, t2);
    t1.show();
    return 0;
}