#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    char name[30];
    int id;

public:
    void getData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
    }

    void showData()
    {
        cout << "Name: " << name << "\nID: " << id << endl;
    }
};

int main()
{
    Student s;
    s.getData();
    ofstream fout("data.txt", ios::out);
    fout.write((char *)&s, sizeof(s));
    fout.close();
    cout << "Data written to file in binary format.\n"
         << endl;
    Student s2;
    ifstream fin("data.txt", ios::in);
    fin.read((char *)&s2, sizeof(s2));
    fin.close();

    cout << "Data read from file:\n";
    s2.showData();

    return 0;
}
