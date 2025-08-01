// Map in STL
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Raj";
    for (auto it : m)
    {
        cout << it.first << " : - " << it.second << " " << endl;
    }
    cout << endl;
    cout << m.at(1);
    cout << endl;
    m.insert({10, "Atherban"});
    m.emplace(12, "New");
    for (auto it : m)
    {
        cout << it.first << " : - " << it.second << " " << endl;
    }
    return 0;
}