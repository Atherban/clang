#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string inputFile = "data.txt";
    string outputFile = "copy.txt";
    string line;

    ifstream fin(inputFile);
    if (!fin)
    {
        cout << "Failed to open " << inputFile << " for reading." << endl;
        return 1;
    }
    ofstream fout(outputFile);
    if (!fout)
    {
        cout << "Failed to open " << outputFile << " for writing." << endl;
        return 1;
    }
    while (getline(fin, line))
    {
        fout << line << endl;
    }

    cout << "File content copied from " << inputFile << " to " << outputFile << " successfully." << endl;

    fin.close();
    fout.close();

    return 0;
}
