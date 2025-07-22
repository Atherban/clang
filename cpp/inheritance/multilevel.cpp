#include <iostream>
using namespace std;

class Grandparent
{

    int privateData = 100;

protected:
    int protectedData = 200;

public:
    int publicData = 300;

    void showGrandparent()
    {
        cout << "Grandparent - Private Data: " << privateData << endl;
        cout << "Grandparent - Protected Data: " << protectedData << endl;
        cout << "Grandparent - Public Data: " << publicData << endl;
    }
};

class Parent : public Grandparent
{
public:
    void showParent()
    {
        // cout << "Private Data: " << privateData << endl;
        cout << "Parent - Protected Data: " << protectedData << endl;
        cout << "Parent - Public Data: " << publicData << endl;
    }
};

class Child : public Parent
{
public:
    void showChild()
    {
        // cout << "Private Data: " << privateData << endl;
        cout << "Child - Protected Data: " << protectedData << endl;
        cout << "Child - Public Data: " << publicData << endl;
    }
};

int main()
{
    Child obj;

    cout << "Access via Grandparent function:" << endl;
    obj.showGrandparent();

    cout << "\nAccess via Parent function:" << endl;
    obj.showParent();

    cout << "\nAccess via Child function:" << endl;
    obj.showChild();

    cout << "\nDirect access in main:" << endl;
    // cout << obj.privateData;
    // cout << obj.protectedData;
    cout << "Public Data: " << obj.publicData << endl;

    return 0;
}
