// add 2 complex numbers using friend function
#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    friend Complex add(Complex c1, Complex c2);
    friend istream &operator>>(istream &in, Complex &c);
    friend ostream &operator<<(ostream &out, Complex c);
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

// Overloading << for output
ostream &operator<<(ostream &out, Complex c)
{
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    cin >> c1;

    cout << "Enter second complex number:" << endl;
    cin >> c2;

    result = add(c1, c2);

    cout << "\nFirst Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "Sum of Complex Numbers: " << result << endl;

    return 0;
}
