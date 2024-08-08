#include <iostream>
using namespace std;

// int sum(int a, int b){       /*This is correct just remove comment but in second case it goes in last*/
//     int c = a+b;
//     return c;
// }

// Function prototype
// type function-name (arguments);

int sum(int a, int b);
/* int sum(int a, int b)   Acceptable
int sum(inta,b)   Not aceptable
int sum(int, int)  Acceptable      */

void g(void);
int main()
{

    int num1, num2;
    cout << "Enter the value of num1 ";
    cin >> num1;
    // num1 and num2 are actual parameters.
    cout << "Enter the value of num2 ";
    cin >> num2;

    cout << "The sum of num1 and num2 is " << sum(num1, num2);

    g();

    return 0;
}
int sum(int a, int b)
{
    int c = a + b;
    return c;
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2
    // Formal Parameters and Actual Parameters both can have same name
}
void g(void)
{
    cout << "\nHello, Good Morning";
}

// When a function is called with some value then a copy of number is formed in function it does not affect the number
// Like when we give a function value n and increase it in the function but if we call it without function even when the function is called it show the original value of n even it return a value