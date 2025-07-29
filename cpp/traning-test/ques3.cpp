// - Abstract class Animal with pure virtual method makesound()
// - Derived Classes Dog and Cat that override it.
// - Use BAse class pointer to call the function.

#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
};

class Dog : public Animal
{

public:
    void makeSound()
    {
        cout << "Dog Barking" << endl;
    }
};

class Cat : public Animal
{

public:
    void makeSound()
    {
        cout << "Cat doing Meow" << endl;
    }
};

int main()
{

    Animal *p;
    Dog d;
    Cat c;
    p = &d;
    p->makeSound();
    p = &c;
    p->makeSound();
}