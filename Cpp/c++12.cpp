#include <iostream>
using namespace std;

class Y; /*Here forward deceleration is used to tell the complier that a class Y is exist*/
class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y); /*Due to this forward deceleration is used*/
};
class Y
{
    int num;

public:
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Sum of data " << o1.data + o2.num;
}

class c2;
class c1
{
    int value1;
    friend void exchange(c1 &, c2 &);

public:
    void invalue(int a)
    {
        value1 = a;
    }
    void display(void)
    {
        cout << value1 << endl;
    }
};

class c2
{
    int value2;
    friend void exchange(c1 &, c2 &);

public:
    void invalue(int a)
    {
        value2 = a;
    }
    void display(void)
    {
        cout << value2 << endl;
    }
};

void exchange(c1 &m, c2 &n)
{
    int temp = m.value1;
    m.value1 = n.value2;
    n.value2 = temp;
}
int main()
{
    X a1;
    a1.setvalue(1);

    Y b1;
    b1.setvalue(2);

    add(a1, b1);
    cout << endl;

    c1 oc1;
    c2 oc2;

    oc1.invalue(4);
    oc2.invalue(48);
    exchange(oc1, oc2);

    cout << "The value of c1 after exchanging value is ";
    oc1.display();
    cout << "The value of c2 after exchanging value is ";
    oc2.display();

    return 0;
}