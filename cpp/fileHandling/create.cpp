#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream obj("data.txt");
    obj << "This is file handling program " << endl;
    obj.close();
    return 0;
}