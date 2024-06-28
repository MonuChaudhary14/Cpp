#include <iostream>
using namespace std;
int count = 0;     /*Global variable*/

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
    number(number &obj)
    { /*When no copy constructor is found, complier supplies its own one copy constructor*/
        cout << "Copy constructor called " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for object "<<count<<endl;
        count--;         /*If we dont use this it does not change the last value like it shows 3 in all cases when 3 comes*/
    }
};
int main()
{
    number x, y, z(45) , z2;
    x.display();
    y.display();
    z.display();
    number z1(z); /*Copy constructor invoked*/
    z1.display();

    z2 = z;
    z2.display();         /*Copy constructor does not invoke*/
    number z3 = z;  /*Copy constructor invoked*/
    z3.display();

    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1 "<<endl;
    num n1;
    {cout<<"Entering this block"<<endl;
    cout<<"Creating two more objects"<<endl;
    num n2 , n3;
    cout<<"Exisiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;



    return 0;
}
  /*Inheritance Video no.36*/