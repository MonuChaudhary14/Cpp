#include <iostream>
#include <iomanip> /*To use setw we have to add it*/
using namespace std;
int main()
{
    // Constant in C++
    const int d = 45;
    cout << "The value of d was " << d << endl;
    // d = 65; This code will show error because a is used as a constant and it cannot be changed.
    // To remove unnecessary mistakes we use this.

    // Manipulators are endl,setw and many more.
    // Setw used to set that the character contain certain words space
    int a = 10, b = 500, c = 1000;
    cout << "This is the value of a without setw is " << a << endl;
    cout << "This is the value of b without setw is " << b << endl;
    cout << "This is the value of c without setw is " << c << endl;

    cout << "This is the value of a with setw is " << setw(4) << a << endl;
    cout << "This is the value of b with setw is " << setw(4) << b << endl;
    cout << "This is the value of c with setw is " << setw(4) << c << endl; /*This character is already is of 4 space long so it doesnot change its space*/

    int p, u;
    cout << "P = ";
    cin >> p;
    cout << endl;
    cout << "U = ";
    cin >> u;
    int z;                    /*If we didn't want to use int z; we can also use int in next line*/
    z = (((p * 4) + 40) - u); /*int z = ....*/
    cout << "The value of z is " << z;
    cout << endl;
    //  Video 9
    // Selection Control Structure:If else-if else ladder
    int age;
    cout << "Tell me your age:";
    cin >> age;
    if ((age < 12) && (age > 0))
    {
        cout << "You cannot play this game" << endl;
    }
    else if (age <= 0)
    {
        cout << "You are not yet born." << endl;
    }
    else if (age == 12)
    {
        cout << "You can play this game but cannot purchase anything." << endl;
    }
    else
    {
        cout << "You can play this game and can purchase anything." << endl;
    }
    // Selection control method 2-Switch case statements
    int years;
    cout << "Enter your age";
    cin >> years;
    switch (years)
    {
    case 12:
        /* code */
        cout << "You are 12";
        break;

    case 18:
        /* code */
        cout << "You are 18";
        break; /*If break is not used it check all the cases and give multiple answers*/

    case 40:
        /* code */
        cout << "You are 40";
        break;

    default: /*On entering other value than 12,18,40 we get the result of default */
        cout << "No special cases" << endl;
        break;
    }
    cout << endl;
    // Loops in C++
    // 1.For loop
    // 2.While Loop
    // 3.do-while Loop

    /*
    Syntax for (For loop)
    for (initilization; condition; updation)
    {
        loop body(C++ code)
    }
    */
    for (int i = 0; i <= 4; i++)
    {
        /* code */
        cout << i << endl;
        // If we use i++ here then it take value by 2 common difference
    }

    // Infinite For loop
    // for (int i; 20<=40; i++)          In place of condition use a condition which is always true.
    // {
    //     cout<<i<<endl;
    // }

    /*
    While Loop:
    Syntax:
    while(condition)
    {
        C++ statements
    }
    */
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    int m = 8;
    while (m <= 40)
    {
        cout << m << endl;
        m++;
    }

    // Infinite While Loop
    // int n=1;
    // while(n>=1){    We can also use true in place of n>=1
    // cout<<n<<endl;
    // n++;
    // }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // Do while Loop:
    /*
    Syntax:
    do
    {
        C++ statements
    }while(condition);   It compulsary runs one time and then check the condition
    */

    int v = 2;
    do
    {
        cout << v << endl;
        v++;
    } while (v <= 50);
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    int f = 2;
    do
    {
        cout << f << endl;
        f++;
    } while (false); /*It runs one time and then stops because condition is false*/

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    int x, y;
    for (x = 1; x <= 20; x++)
    {
        y = 6 * x;
        cout << y << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int u = 0; u < 40; u++) /*It breaks when reach the given value*/
    {
        if (u == 10)
        {
            break;
        }
        cout << u << endl;
    }

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    for (int p = 0; p < 40; p++) /*It leaves the given value*/
    {
        if (p == 10)
        {
            continue;
            ;
        }
        cout << p << endl;
    }

    return 0;
}