#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y) /*We can make infinte number of constructors*/
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void print(void)
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

class simple
{
    int data1, data2;

public:
    simple(int m, int n = 10)
    { /*We can use more integers in this*/
        data1 = m;
        data2 = n;
    }
    void printdata();
};

void simple ::printdata()
{
    cout << "The value of data 1 is " << data1 << " and the value of data 2 is " << data2 << endl;
}
int main()
{
    complex c1(8, 7); /*This constructor is used because it meets the upper condition*/
    c1.print();

    complex c2(2, 0);
    c2.print();

    complex c3;
    c3.print();

    simple s(7, 8);
    s.printdata();

    simple r(3);
    r.printdata();

    return 0;
}