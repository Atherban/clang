// WAP to take 5 students marks of three subjects, and calculate them to give grade.
#include <iostream>
using namespace std;

class student
{
    string name;
    int id;
    float marks[3];

public:
    class course
    {
        string course_name;
        int course_id;

    public:
        void getCourseDetails()
        {
            cout << "Enter Course Name and id :" << endl;
            cin >> course_name >> course_id;
        }
        void showDetails()
        {
            cout << "Course Name : " << course_name << endl;
            cout << "Course ID : " << course_id << endl;
        }
    };

    void getStuDetails()
    {
        cout << "Enter the name of the student : " << endl;
        cin >> name;
        cout << "Enter ID : " << endl;
        cin >> id;
        cout << "Enter the Marks : " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Subject " << i + 1 << " :";
            cin >> marks[i];
        }
    }
    void displayGrade()
    {
        cout << "Grade : " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Subject " << i << " : ";
            if (marks[i] > 70)
            {
                cout << "A " << endl;
            }
            else if (marks[i] > 40)
            {
                cout << "B " << endl;
            }
            else if (marks[i] > 30)
            {
                cout << "c " << endl;
            }
            else
            {
                cout << "D " << endl;
            }
        }
    }
};

int main()
{
    student s1;
    student::course c1;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Details for Student " << i + 1 << endl;
        s1.getStuDetails();
        s1.displayGrade();
        c1.getCourseDetails();
        c1.showDetails();
    }
    return 0;
}