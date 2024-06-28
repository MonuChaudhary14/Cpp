#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1,complex o2); /*This is used to give permission to sumcomplex that it can use private data of complex*/
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

complex sumcomplex(complex o1, complex o2){ /*return complex*/
    complex o3;
    o3.setnumber(o1.a + o2.a , o1.b + o2.b);
    return o3;
}
int main()
{ 
    complex c1, c2 ,sum ;
    c1.setnumber(1, 2);
    c1.printnumber();
    
    cout << endl;

    c2.setnumber(3, 4);
    c2.printnumber();

    sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}

/* Properties of friend function
1.Not in the scope of class 
2.Since it is not in the scope of class, it cannot be called from the object of class.    c1.sumcomplex() --> Invalid
3.Can be invoked without the help of any object
4.Usually contants the objectsas arguments
5.Can be declared inside public or private section of the class
6.It cannot access the menvbers directly by theor names and need object_name.member_name    */