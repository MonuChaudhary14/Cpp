#include <iostream>
// iostream is a header file.   Here 'io' means input and output.
// System header files: It comes with complier like iostream, iomanip ,etc.
// User Header file:It is written by the programmer and can include it by using command #include"file name"
// #include"c++1.cpp"
using namespace std;
int k = 40;
int m = 60; /*This is a global operator*/
int main()
{
    // this is not included in output               
    /*
    This
    is
    also
    not
    included
    in
    output*/
    // Varibales:-Containers to store data
    // Variable can be of various type(Data types)
    // Data types:-  int , float, char, bool,double
    int sum = 6;
    cout << "Hello World " << sum; /*Video no.3*/
    cout << "\n";                  /*We can also use  cout<<'\n';   */
    int g = 1;
    int h = 2;
    h = 15; /*To change the value we can use this before the system print the value */
    cout << "This is the value of g = " << g << " and this is the value of h = " << h;
    int c = 3, d = 4;
    cout << "\nYou can provide space in any int like in c and d, now the value of c and d are " << c << "," << d;
    float pi = 3.14;
    cout << "\nThe value of pi is " << pi;
    char character_name = 'M';
    cout << "\nThe name of the character is " << character_name;
    bool e = true;
    cout << "\nThis is " << e; /*video no 4*/

    int num1, num2;
    cout << "\nEnter the value of num1 \n"; /*<< This is called as Insertion Operator*/
    cin >> num1;

    cout << "Enter the value of num2 \n";
    cin >> num2; /*>> This is called as Extraction Operator*/

    cout << "Sum " << num1 + num2;

    /*We cannot use reserved keywords*/
    // Video no.5
    // We can make any code comment by pressing  ctrl+/
    cout << "\nOperators in C++" << endl;
    // endl can be used in the place of \n.
    cout << "Types  \n";
    cout << "1.Arithmetic Operators \n";
    // Arithmetic Operators: These are +,-,*,/ and many more.
    int a = 2, b = 10;
    cout << "\na=2 and b=10";
    cout << "\nThe value of a+b is " << a + b;
    cout << "\nThe value of a-b is " << a - b;
    cout << "\nThe value of a*b is " << a * b;
    cout << "\nThe value of a/b is " << a / b; /*It give zero because it only give integer value*/
    cout << "\nThe value of a/b is " << b / a;
    cout << "\nThe value of a%b is " << a % b;
    cout << "\nThe value of a++ is " << a++;         /*This means that print a and send the value of a to next function a++*/
    cout << "\nThe value of a-- is " << a--;         /*This means that print the value of a which is 3 because of the upper code and send the value of a--*/
    cout << "\nThe value of ++a is " << ++a;         /*In this firstly the value of a is increased by 1*/
    cout << "\nThe value of --a is " << --a << endl; /*In this firstly the value of a is decreased by 1 */

    cout << "2.Assignment OPerators";
    // Assignment Operators are used to assign value to variables
    int x = 1, y = 2, z = 3;
    char s = 's';

    cout << "\n3.Comparison Operators";
    cout << "\nThe value of a==b is " << (a == b);
    cout << "\nThe value of a!=b is " << (a != b);
    cout << "\nThe value of a>=b is " << (a >= b);
    cout << "\nThe value of a<=b is " << (a <= b);
    cout << "\nThe value of a<b is " << (a < b);
    cout << "\nThe value of a>b is " << (a > b);

    cout << "\n4.Logical Operators\n";
    cout << "The value of this logical and operator ((a==b)) && (a<b) is " << ((a == b) && (a < b)) << endl; /*Here && works as 'and' means if both the condition are true then it is true */
    cout << "The value of this logical or operator ((a==b)) || (a<b) is " << ((a == b) || (a < b)) << endl;  /*Here || works 'or' means if any condition is true then it is true*/
    cout << "The value of this logical not operator (!(a==b)) is " << (!(a == b)) << endl;                   /*Here ! works as not means if reverse the thing*/

    int j, l;
    cout << "j is equal to \n";
    cin >> j;

    cout << "l is equal to\n";
    cin >> l;

    int k = j + l; /*Always remember to use int in this case otherwise it show the value of local operator*/
    cout << "The sum of j+l is equal to " << k << endl;
    cout << "Global value is " << ::k;
    // It always count first local value not global value.
    // To find the value of global k then add :: in k like
    cout << endl;
    int n, o;
    cout << "n is equal to \n";
    cin >> n;

    cout << "o is equal to\n";
    cin >> o;

    int m = o + n;
    cout << "The sum of n+o is equal to " << ::m;
    cout << endl;

    // Float, Double and Long double Literals
    float q = 50.2f; /*In this f or F denotes that it is a float.It is not compulsary*/
    cout << endl;
    long double w = 50.2l; /*In this l or L denotes it is a long double*/
    cout << endl;
    // BY default system reads 50.2 as a long double not as a float
    // To make it float we have to add f into it.
    cout << "The value of q is " << q << endl
         << "The value of w is " << w;
    cout << endl;
    cout << "The size of 50.2 is " << sizeof(50.2) << endl; /*By default it take it at double*/
    cout << "The size of 50.2f is " << sizeof(50.2f) << endl;
    cout << "The size of 50.2l is " << sizeof(50.2l) << endl;

    // Reference Variables  
    // If we give a refernece variable in a function then it change the value of all the name 
    // like if the value of num is 1 and we increase it value when we give it in a function which contain it refernece then the value which is increased will increase in all the next cases even if it is outside the function
    float name = 12.0;
    float &surname = name;
    cout << name << endl;
    cout << surname << endl;

    // Type Casting:Change a data type into another
    int i = 100;
    float v = 20.3;
    cout << "This is the value of i float is " << (float)i;
    cout << endl;
    cout << "This is the value of v int is " << int(v); /*Both the methods are correct*/

    return 0;
}