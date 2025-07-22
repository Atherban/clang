#include <iostream>
using namespace std;

class Father
{
    int privateDataF = 10;

protected:
    int protectedDataF = 20;

public:
    int publicDataF = 30;

    void showFather()
    {
        cout << "Father - Private Data: " << privateDataF << endl;
        cout << "Father - Protected Data: " << protectedDataF << endl;
        cout << "Father - Public Data: " << publicDataF << endl;
    }
};

class Mother
{
    int privateDataM = 40;

protected:
    int protectedDataM = 50;

public:
    int publicDataM = 60;

    void showMother()
    {
        cout << "Mother - Private Data: " << privateDataM << endl;
        cout << "Mother - Protected Data: " << protectedDataM << endl;
        cout << "Mother - Public Data: " << publicDataM << endl;
    }
};

class Child : public Father, public Mother
{
public:
    void showChild()
    {
        // cout << privateDataF;
        cout << "Accessing Father's Protected Data: " << protectedDataF << endl;
        cout << "Accessing Father's Public Data: " << publicDataF << endl;

        // cout << privateDataM;
        cout << "Accessing Mother's Protected Data: " << protectedDataM << endl;
        cout << "Accessing Mother's Public Data: " << publicDataM << endl;
    }
};

int main()
{
    Child obj;

    cout << "\nAccess via Child method:" << endl;
    obj.showChild();

    cout << "\nAccess via Father method:" << endl;
    obj.showFather();

    cout << "\nAccess via Mother method:" << endl;
    obj.showMother();

    cout << "\nDirect access in main:" << endl;
    cout << "Father's Public Data: " << obj.publicDataF << endl;
    cout << "Mother's Public Data: " << obj.publicDataM << endl;

    return 0;
}
