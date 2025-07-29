// Implement :
//     Student : set roll number
//     Test : Inherits From Student,stores 5 Subject Marks
//     Result : Inherits from Test , contains a method Display() to calculate and print :
//         - Roll No, Total Marks, and Average

#include <iostream>
using namespace std;

class Student
{
    int Roll;

public:
    void GetRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> Roll;
    }

    int ShowRoll()
    {
        return Roll;
    }
};

class Test : public Student
{
protected:
    int sub[5];

public:
    void getMarks()
    {
        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> sub[i];
        }
    }

    int returnSumMarks()
    {
        int sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += sub[i];
        }
        return sum;
    }
};

class Result : public Test
{
public:
    void Display()
    {
        int rollNo = ShowRoll();
        int totalMarks = returnSumMarks();
        float average = totalMarks / 5.0;

        cout << "\n--- Student Result ---\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Average: " << average << endl;
    }
};

int main()
{
    Result r;
    r.GetRoll();
    r.getMarks();
    r.Display();
    return 0;
}
