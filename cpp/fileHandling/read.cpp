#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string line;
    ifstream file("data.txt");

    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
    }

    return 0;
}
