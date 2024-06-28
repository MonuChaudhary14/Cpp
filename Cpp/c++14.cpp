#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int);

    void printvalue()
    {
        cout << "Your number is " << a << " + " << b << " i" << endl;
    }
};
complex ::complex(int x, int y)
{ /*This is called as parameterized constructor it takes 2 parameters*/
    a = x;
    b = y;
}

class point
{
    int m, n;

public:
    point(int p, int q)
    {
        m = p;
        n = q;
    }
    void display()
    {
        cout << "The coordinates of the point is (" << m << "," << n << ")" << endl;
    }
};
int main()
{
    // Implicit call
    complex a(4, 6);
    a.printvalue();

    // Explicit call
    complex b = complex(8, 9);
    b.printvalue();

    point w(1, 2);
    w.display();

    point r(4, 5);
    r.display();

    return 0;
}
