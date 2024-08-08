#include <iostream>
#include <string>
using namespace std;
class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); /*Decleration*/
    void getdata()
    {
        cout << "The value of a is " << a << endl; /*We can also use this outside*/
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
class binary
{
    /*It is optional to write private::*/
    string s; /*Here s is a private member because by default everything is private    */
public:
    void read(void);
    void check_bin(void); /*If i make check binary a private then it can work when check binary is given just after void ones but cannot use it in int main as b.check_bin*/
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number ";
    cin >> s;
}
void binary ::check_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format";
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    check_bin(); /*If i want to directly check it then can use this and remove b.check_bin in int main*/
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{

    employee monu;

    cout << "The size of monu is " << sizeof(monu) << endl; /*Learn about this*/
    monu.d = 50;
    monu.e = 40;
    // monu.a or b or c cannnot be used because a,b,c are private
    monu.setdata(1, 2, 4);
    monu.getdata();

    //    OOPs  --> Classes and objects
    //    Class --> Extention of structure
    //    Structure had limitations
    //    -->Private
    //    -->Public
    //    Classes --> Structure + more
    //    Classes can have methods and properties
    //    Classes can have few public and few private members
    //    Structure in C++ are typedef
    //    You can declare objects along with the class deceleration like this
    //    --> class employee{
    //    class employee
    //    } monu, ketan , prachi;
    //    monu.salary = 100000 makes no sense if it is private

    binary b;
    b.read();
    // b.check_bin();
    b.display();
    cout << endl;
    b.ones();
    b.display();

    return 0;
}