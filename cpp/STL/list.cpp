#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> l = {1, 23, 45, 90, 6};
    l.push_back(56);
    l.push_front(20);
    cout << "After Pushing : \n";
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.pop_back();
    l.pop_front();
    cout << "After Poping : \n";

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After sorting : \n";
    l.sort();
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After Reverse : \n";
    l.reverse();
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
}