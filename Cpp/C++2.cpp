#include <iostream>
using namespace std;
int main()
{
    // Pointer --> It is a data type which holds the address of other data types

    int a = 4;
    int *b = &a; /*Here b is a pointer which stores the address of a */
    // & ---> Address of Operator
    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;

    // * ---> Deference of Operator --> Tells that at that address what is value
    cout << "The value of address b is " << *b << endl;

    // Pointer to Pointer
    int **c = &b; /* c is the address of b which is also the address of a*/
    cout << "The address of b is " << c << endl;
    cout << "The address of b is " << &b << endl; /* Doubt  Video no.12*/
    cout << "The value of address c is " << **c << endl;
    cout << "The value of address value to (value at(c)) is " << **c << endl;

    // Array         Note- We can use array when the type of all the elements are same like all are int,float, etc.
    int marks[6 /*No need to write the value*/] = {92, 90, 95, 78, 85, 100};
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    // We can change the value of any array before it print it
    marks[3] = 45;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;
    cout << marks[5] << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Math Marks" << endl;
    int Math_marks[6];
    Math_marks[0] = 80;
    Math_marks[1] = 81;
    Math_marks[2] = 88;
    Math_marks[3] = 87;
    Math_marks[4] = 84;
    Math_marks[5] = 86;
    cout << Math_marks[0] << endl;
    cout << Math_marks[1] << endl;
    cout << Math_marks[2] << endl;
    cout << Math_marks[3] << endl;
    cout << Math_marks[4] << endl;
    cout << Math_marks[5] << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "The value of marks " << i << " is " << marks[i] << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    // The address of first block is array is name of it
    // Pointer arithmetic
    // address(new)= address(old)+i*size of data type
    // Pointer and Arrays
    // int* p = marks;
    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    // cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
    // cout<<"The value of *(p+5) is "<<*(p+5)<<endl;
    // cout<<endl;cout<<endl;cout<<endl;cout<<endl;

    int *p = marks;
    cout << *(p++) << endl;
    cout << *(p) << endl;
    cout << *(++p) << endl;

    return 0;
}