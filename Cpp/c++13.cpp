#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /*Creating a constructor
    Constructor is a special member function with the same name as the class
    It is used to initilize the object of the class
    It is automatically invoked*(called) whenever the object is created*/

    complex(void); /*Constructor declaration*/

    void printvalue()
    {
        cout << "The Your number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void /*Can also use int a  */)
{ /*This is a default constructor as it takes no parameters*/
    a = 45;
    b = 78;
    // cout<<"Hello world";  /*This can also be used because it is inside the constructor
}
int main()
{
    complex c1, c2, c3;
    c1.printvalue();
    c2.printvalue();
    c3.printvalue();

    return 0;
}

// Properties of Constructors

/*1.It should be declared in the public section of the class
2.They are automatically invoked whenever the obhject is created
3.They cannot return values and do not have return types
4.It can have default arguments
5.We cannot refer to their address  */