#include <iostream>
#include <cmath>
using namespace std;

class simple
{
    double x, y;

public:
    void givenumbers()
    {
        cout << "Enter the first number of simple calcualtor";
        cin >> x;
        cout << "Enter the second number of simple calcualtor";
        cin >> y;
    }

    void add()
    {
        cout << "The sum of " << x << " and " << y << " is " << x + y << endl;
    }

    void subtract()
    {
        cout << "The subtact of " << x << " and " << y << " is " << x - y << endl;
    }

    void multiply()
    {
        cout << "The multiply of " << x << " and " << y << " is " << x * y << endl;
    }

    void divide()
    {
        cout << "The divide of " << x << " and " << y << " is " << x / y << endl;
    }
};

class scientificc
{
    double a, b;

public:
    void setnumbers()
    {
        cout << "Enter the first number of scientific calculator";
        cin >> a;
        cout << "Enter the second number of scientific calcualtor";
        cin >> b;
    }

    void squareroot()
    {
        cout << "The sqaure root of the sum of the number " << a << " and " << b << " is " << sqrt(a + b) << endl;
    }

    void exponential()
    { /*Both can not have exp*/
        cout << "The value of exponential power raised to " << a + b << " is " << exp(a + b) << endl;
    }

    void cuberoot()
    {
        cout << "The cuberoot of " << a + b << " is " << cbrt(a + b) << endl;
    }

    void mod()
    {
        cout << "The mod of " << a + b << " is " << abs(a + b) << endl;
    }

    void sine()
    {
        ;
        cout << "The sine of " << a + b << " is " << sin(a + b) << endl;
    }

    void minimum()
    {
        cout << "The minimum value between " << a << " and " << b << " is " << fmin(a, b) << endl;
    }
};

class hybrid : public simple, public scientificc
{
public:
    void callboth()
    {
        givenumbers();
        setnumbers();
    }

};

int main()
{

    // simple s;
    // s.givenumbers();
    // s.add();
    // s.divide();
    // s.multiply();
    // s.subtract();

    // scientificc sc;

    // sc.setnumbers();
    // sc.squareroot();
    // sc.setnumbers();
    // sc.sine();
    // sc.setnumbers();
    // sc.mod();
    // sc.setnumbers();
    // sc.cuberoot();
    // sc.setnumbers();
    // sc.exponential();
    // sc.setnumbers();
    // sc.minimum();

    hybrid h;
    h.callboth();
    h.add();
    h.subtract();
    h.divide();
    h.multiply();
    h.sine();
    h.cuberoot();
    h.minimum();
    h.mod();
    h.squareroot();
    h.exponential();

    return 0;
}