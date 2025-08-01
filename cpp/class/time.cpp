#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hr = h;
        min = m;
        sec = s;
    }

    void getTime()
    {
        cout << "Enter hours, minutes, seconds: ";
        cin >> hr >> min >> sec;
    }

    void displayTime()
    {
        cout << hr << "h " << min << "m " << sec << "s" << endl;
    }

    Time addTime(Time t)
    {
        Time temp;
        temp.sec = sec + t.sec;
        temp.min = min + t.min + (temp.sec / 60);
        temp.sec = temp.sec % 60;

        temp.hr = hr + t.hr + (temp.min / 60);
        temp.min = temp.min % 60;

        return temp;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.getTime();

    cout << "Enter second time:\n";
    t2.getTime();

    result = t1.addTime(t2);

    cout << "\nFirst Time: ";
    t1.displayTime();

    cout << "Second Time: ";
    t2.displayTime();

    cout << "Total Time: ";
    result.displayTime();

    return 0;
}
