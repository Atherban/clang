#include <iostream>
using namespace std;

template <class T>
T getMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    cout << "Max (int): " << getMax(3, 7) << endl;
    cout << "Max (float): " << getMax(3.5f, 2.1f) << endl;
    cout << "Max (char): " << getMax('a', 'z') << endl;
    return 0;
}
