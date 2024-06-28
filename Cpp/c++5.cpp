#include <iostream>
using namespace std;

// void swap(int a, int b){                     /*Temp      a       b  */
// int temp = a;                            /* 4        5       5  */
// a = b;                                   /* 4        5       5  */
// b = temp;                                /* 4        5       4  */
// }

//  Call by reference using pointers
// void swapPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b  = temp;
// }

//  Call by reference using C++ reference variables
// void swapReferencevar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b  = temp;
// }

int &swapReferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

inline int product(int u, int v)
{                 /*If we not use inline this code still work but take more space but donot use it when code is complex because it take more space*/
    return u * v; /*If static function is used do not use inline*/
}

int multiply(int k, int l)
{
    static int c = 0; /*This execute only once*/
    c = c + 1;        /*Due to this it initilize the value of c once and then retain the value      video no.17*/
    return k * l + c;
}
float moneyreceived(int currentmoney, float interest = 1.07)
{ /*All the default arguments must be at the extreme right*/
    return currentmoney * interest;
}

int main()
{
    int x = 4, y = 5;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    // swap(x,y);                       This will not work
    // cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

    // swapPointer(&x ,&y);                        /*This will swap a and b using pointers*/
    // cout<<"The value of x is "<<x<<" and the value of b is "<<y<<endl;      /*If i use this in the same code then on next code value of x and y will change again*/

    //   swapReferencevar(x ,y);                        /*This will swap a and b using C++ variables*/
    // cout<<"The value of x is "<<x<<" and the value of b is "<<y<<endl;

    swapReferencevar(x, y) = 455; /*This will swap a and b using C++ variables*/
    cout << "The value of x is " << x << " and the value of b is " << y << endl;

    int u, v;
    cout << "Enter the value of u ";
    cin >> u;

    cout << "Enter the value of v ";
    cin >> v;
    cout << endl;

    cout << "The product of u and v is " << product(u, v) << endl;
    cout << "The product of u and v is " << product(u, v) << endl;
    cout << "The product of u and v is " << product(u, v) << endl;
    cout << "The product of u and v is " << product(u, v) << endl;
    cout << "The product of u and v is " << product(u, v) << endl;
    cout << "The product of u and v is " << product(u, v) << endl;
    cout << endl;
    int k, l;
    cout << "Enter the value of k ";
    cin >> k;

    cout << "Enter the value of l ";
    cin >> l;
    cout << endl;

    cout << "The product of k and l is " << multiply(k, l) << endl;
    cout << "The product of k and l is " << multiply(k, l) << endl;
    cout << "The product of k and l is " << multiply(k, l) << endl;
    cout << "The product of k and l is " << multiply(k, l) << endl;
    cout << "The product of k and l is " << multiply(k, l) << endl;
    cout << "The product of k and l is " << multiply(k, l) << endl;

    int money = 100000;
    cout << "If  you have " << money << " Rs, you will receive " << moneyreceived(money) << "after 1 year" << endl; /*Doubt video no.7*/
    cout << "If  you have " << money << " Rs, you will receive " << moneyreceived(money, 0.9) << "after 1 year";

    return 0;
}