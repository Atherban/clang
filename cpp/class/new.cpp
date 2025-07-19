#include <iostream>
using namespace std;
int main()
{
    int *p;
    int sum = 0;
    p = new int[50];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter " << i + 1 << " element : " << endl;
        cin >> p[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum += p[i];
    }
    cout << endl
         << sum;

    return 0;
}