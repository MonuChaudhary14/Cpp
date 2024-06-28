#include <iostream>
using namespace std;

class base
{
    protected:          
    int a;
    private:
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(void)
{
    data1 = 15;
    data2 = 20;
}

int base :: getdata1()
{
    return data1;
}

int base :: getdata2()
{
    return data2;
}

class derived : public/*protected*/ base
{
    int data3;

public:
    void process();
    void display();
};

void derived :: process()
{
    // setdata();       This is used when we inheritage private
    data3 = data2 * getdata1(); /*IT is  a function so it is used with bracket*/
}

void derived :: display()
{
    cout << "The value of data 1 is " << getdata1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}
int main()
{
    derived der;
    der.setdata();
    // We cannot use setdata here when private inheritage is called
    der.process();
    der.display();
    // der.a;       Show error because a is the private member of derived class inherited from the private member of the base class

    return 0;
}


//                          Public              Private        Protected derivation
// 1.Private members      Not inherited     Not inherited       Not inherited
// 2.Protected members     Protected          Private            Protected
// 3.Public members         Public            Private            Protected 