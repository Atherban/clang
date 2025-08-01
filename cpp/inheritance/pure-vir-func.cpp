#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0;
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Square" << endl;
    }
};

int main()
{
    Shape *s1;
    Circle c;
    Square s;

    s1 = &c;
    s1->draw();

    s1 = &s;
    s1->draw();

    return 0;
}
