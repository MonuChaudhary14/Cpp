#include <iostream>
using namespace std;

// class baseclass
// {
// public:
//     int var1;
//     void display()
//     {
//         cout << "Displaying base class variable var1 " << var1 << endl;
//     }
// };

class baseclass
{
public:
    int var1;
    virtual void display() /*Virtual is used to command the pointer that if it point the derived class object then run the function of derived class*/
    {                      /*If we don't use virtual in it, then the base class pointer which point to derived class object run the function of base class*/
        cout << "Displaying base class variable var1 " << var1 << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var2;
    void display()
    {
        cout << "Displaying base class variable var1 " << var1 << endl;
        cout << "Displaying derived class variable var2 " << var2 << endl;
    }
};

class operatoroverloading
{

public:
    int a, b;

    int add()
    {
        return a + b;
    }

    void operator+(operatoroverloading &obj)
    {

        int value1 = this->a;
        int value2 = obj.a;
        cout << "Output " << value2 - value1 << endl;
    }
};

int main()
{
    //    Pointers to derived class
    baseclass *base_class_pointer;
    baseclass objbase;
    derivedclass objderived;
    base_class_pointer = &objderived; /*Base class pointer can point to derived class but if we call a function then it call the function of base class*/
    /*This is called as late binding*/
    base_class_pointer->var1 = 45; /*We can access var1 from this*/
    // base_class_pointer->var2 = 78;  /*This cannot be used because we are using pointer of base class and it is not in it*/
    base_class_pointer->display(); /*If virtual is not used then , display will be of base class*/

    cout << endl
         << endl;
    derivedclass *derived_class_pointer;
    derived_class_pointer = &objderived;
    derived_class_pointer->var2 = 62;
    derived_class_pointer->var1 = 72;
    derived_class_pointer->display();

    /*Operator Overloading
        if we want a operator to do two or more type of work then we use this

        Syntax-
        return type operator(input){

        }
        + - a + b  In this a is called as current object and b is called as inout argument

    */

    operatoroverloading O, P;
    O.a = 1;
    P.a = 5;

    O + P;

    return 0;
}