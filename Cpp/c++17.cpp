#include <iostream>
using namespace std;
int count = 0; /*Global variable*/

class number
{
    int a;

public:
    number()
    {
        a = 0; /*This is a default constructor which is needed in almost every*/
    }
    number(int num)
    {
        a = num;
    }
    number(number &obj) /*If we do not use & , then a copy of is created of obj*/
    /*Tn this if we change the value of first then the value of second does not change because it create a copy of object , this is called deep copy*/
    { /*When no copy constructor is found, complier supplies its own one copy constructor*/
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object " << count << endl;
    }
    ~num() /*It does not have any return type and contain no input.   Destructor is automatically called for static allocation like x , y ,z but if we dynamic memory allocation like int * arr = new int , in this case we need amnually call the destructor y using delete arr*/
    {
        cout << "This is the time when destructor is called for object " << count << endl;
        count--; /*If we dont use this it does not change the last value like it shows 3 in all cases when 3 comes*/
    }
};
int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();

    /*When we give x = y , then we are making x equal to y , so all the value of x become y  and if we give x.display()  , it give the value of y. Here '=' this is called is assignment copy operator*/
    z.display();
    number z1(z); /*Copy constructor invoked    If we use copy  then the default constructor which is provided by complier may does not work*/
    z1.display();

    z2 = z;
    z2.display(); /*Copy constructor does not invoke*/ /*When we give this we are sharing the same memory because z2 contain the address the z , this is called as shallow copy*/
    number z3 = z;                                     /*Copy constructor invoked*/
    z3.display();

    number z4(z); /*Copy constructor called*/
    z.display();

    cout << "We are inside the main function" << endl;
    cout << "Creating first object n1 " << endl;
    num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        num n2, n3;
        cout << "Exisiting this block" << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}

// The default copy constructor create a shallow copy