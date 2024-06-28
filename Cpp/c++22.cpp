#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void setrollno(int a)
    {
        rollno = a;
    }
    void print()
    {
        cout << "Your roll no. is " << rollno << endl;
    }
};

class test : virtual public student
{ /*Here student is a virtual base class which it used when same element is used in two or more class and the classes give a class, so same element repeat in them*/
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks()
    {
        cout << "Your result marks in maths is " << maths << " and in physics is " << physics << endl;
    }
};

class sports : public virtual student
{ /*We can use public and virtual at any position*/
protected:
    float score;

public:
    void setscore(float b)
    {
        score = b;
    }
    void printscore()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        print();
        printmarks();
        printscore();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    result monu;
    monu.setrollno(40);
    monu.setmarks(99.0, 98.0);
    monu.setscore(98);
    monu.display();

    return 0;
}

// We can use constructor in derived class
// If base class constructor does not  have any arguments, there is no need of ant constructor in derived class
// But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor
// If both base and derived classes have constructors, base, class constructor is executed first.

// Constructor in different inheritance
// 1.Inmultiple inheritance, base classes are constructed in the order in which they appear in the class declaration
// 2.Inmultilevel inheritance, the constructors are executed in the order of inheritance

// special Syntax
// C++ supports an special syntax for passing arguments to multiple base classes
// The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes
// The body is called after all the constructors are finished

// Special case of virtual base class
// The constructor for virtual base classes are invoked before an nonvirtual base class
// If there are multiple virtual base classes, they are invoked in the order declared
// Any non virtual base class are then constructed before the derived class constructor is executed
