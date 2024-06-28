#include <iostream>
using namespace std;
// Syntax for initilization list in constructor:
// constructor (argument-list) : initilization-section{
// assignment + other code
// }

class test
{
    int a, b;

public:
    // test(int i , int j) : a(i) , b(j)/*This directly initilize the a and b*/
    // test(int i , int j) : a(i) , b(i+j)
    test(int i, int j) : a(i), b(a + j) /*We can also use a in initilizing b because the value of a is available*/
    // test(int i , int j) : b(j) , a(i+b)   /* This will show garbage value because a is initilize first because a is used in test class in private section
    //  if we want to iniitilize b first change the position a and b in private section of the class
    {
        cout << "Constructor executed" << endl;
        cout << "The value of a is " << a << " and the value of b is " << b << endl;
    }
};

int main()
{
    test t(4, 9);
    // Pointer
    int c = 4;
    int *d = &c;
    // *d = 450;       This can be used to change the value of an address

    cout << "The value of c is " << *d << endl; /* * means dereference*/

    // new keyword or operator
    float *p = new float(78.00);        /*Can make of any type like int */
    cout << "The value at address p is " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 30;
    arr[2] = 60;

    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;

    // delete operator 
      int *har = new int[3];
    har[0] = 10;
    har[1] = 30;        /*This can also be used in place of har[1] --> (arr+1) = 30;*/
    har[2] = 60;
    // delete har;
    delete[] har;        /*This free dynamically located array            Delete block of array*/


    cout<<"The value of har[0] is "<<har[0]<<endl;
    cout<<"The value of har[1] is "<<har[1]<<endl;
    cout<<"The value of har[2] is "<<har[2]<<endl;



    return 0;
}