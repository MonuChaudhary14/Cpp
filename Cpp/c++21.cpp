#include <iostream>
using namespace std;

// MUltiple inheritance
// Syntax --> class derived : visibility mode base1 , visibility mode base 2

class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
    void greet(){
        cout<<"Hello";
    }
};

class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
    void greet(){
        cout<<"Toh kaise hai aap log"<<endl;
    }
};

class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "The value of base 1 is " << base1int << endl;
        cout << "The value of base 2 is " << base2int << endl;
        cout << "The sum of base 1 and base 2 is " << base1int + base2int << endl;
    }
    void greet(){
        base1 :: greet();  /*This is used to solve the ambiguity if this is not used it show error because it does not know which output should it display*/
    }
};
/*We can inhert more class to aany derived class*/
int main()
{
    derived monu;
    monu.setbase1int(25);
    monu.setbase2int(5);
    monu.show();
    //Ambibuity 1
    monu.greet();     

    //Ambubuity 2
    // If we have the desired function in base class and the another class is inherited from it then it display the output of first class
    // If the deived class has a function which is also in the base class then it will display the output of derived class
    // monu.greet();    This show the output of base class if another class does not contain the same function




    return 0;
}
//  The inherited class will look like this
// base1int --> protected
// base2int --> protected

// Member function:
// setbase1int() --> public
// setbase2int() --> public