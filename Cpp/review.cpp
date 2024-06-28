#include <iostream>
using namespace std;

int k = 40;
int m = 60; // Global variables

int main() {
    // int sum = 6;
    // cout << "Hello World " << sum << "\n";

    // int g = 1;
    // int h = 2;
    // h = 15;
    // cout << "This is the value of g = " << g << " and this is the value of h = " << h << "\n";

    // int c = 3, d = 4;
    // cout << "You can provide space in any int like in c and d, now the value of c and d are " << c << "," << d << "\n";

    // float pi = 3.14;
    // cout << "The value of pi is " << pi << "\n";

    // char character_name = 'M';
    // cout << "The name of the character is " << character_name << "\n";

    // bool e = true;
    // cout << "This is " << e << "\n";

    // int num1, num2;
    // cout << "Enter the value of num1: ";
    // cin >> num1;

    // cout << "Enter the value of num2: ";
    // cin >> num2;

    // cout << "Sum: " << num1 + num2 << "\n";

    // cout << "Operators in C++\n";
    // cout << "1. Arithmetic Operators\n";
    // int a = 2, b = 10;
    // cout << "a=2 and b=10\n";
    // cout << "The value of a+b is " << a + b << "\n";
    // cout << "The value of a-b is " << a - b << "\n";
    // cout << "The value of a*b is " << a * b << "\n";
    // cout << "The value of a/b is " << (float)a / b << "\n"; // Use type casting for floating point division
    // cout << "The value of a%b is " << a % b << "\n";
    // cout << "The value of a++ is " << a++ << "\n";
    // cout << "The value of a-- is " << a-- << "\n";
    // cout << "The value of ++a is " << ++a << "\n";
    // cout << "The value of --a is " << --a << "\n";

    // cout << "2. Assignment Operators\n";
    // int x = 1, y = 2, z = 3;
    // char s = 's';

    // cout << "3. Comparison Operators\n";
    // cout << "The value of a==b is " << (a == b) << "\n";
    // cout << "The value of a!=b is " << (a != b) << "\n";
    // cout << "The value of a>=b is " << (a >= b) << "\n";
    // cout << "The value of a<=b is " << (a <= b) << "\n";
    // cout << "The value of a<b is " << (a < b) << "\n";
    // cout << "The value of a>b is " << (a > b) << "\n";

    // cout << "4. Logical Operators\n";
    // cout << "The value of (a==b) && (a<b) is " << ((a == b) && (a < b)) << "\n";
    // cout << "The value of (a==b) || (a<b) is " << ((a == b) || (a < b)) << "\n";
    // cout << "The value of !(a==b) is " << (!(a == b)) << "\n";

    int j, l;
    cout << "Enter the value of j: ";
    cin >> j;

    cout << "Enter the value of l: ";
    cin >> l;

    int k = j + l;
    cout << "The sum of j+l is equal to " << k << "\n";
    cout << "Global value is " << ::k << "\n"; // Using :: to access global k

    int n, o;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of o: ";
    cin >> o;

    m = o + n;
    cout << "The sum of n+o is equal to " << ::m << "\n"; // Using :: to access global m

    float q = 50.2f; // Explicit float literal
    long double w = 50.2l; // Explicit long double literal
    cout << "The value of q is " << q << "\n";
    cout << "The value of w is " << w << "\n";
    cout << "The size of 50.2 is " << sizeof(50.2) << "\n";
    cout << "The size of 50.2f is " << sizeof(50.2f) << "\n";
    cout << "The size of 50.2l is " << sizeof(50.2l) << "\n";

    float name = 12.0;
    float &surname = name;
    cout << name << "\n";
    cout << surname << "\n";

    int i = 100;
    float v = 20.3;
    cout << "The value of i as float is " << static_cast<float>(i) << "\n";
    cout << "The value of v as int is " << static_cast<int>(v) << "\n";

    return 0;
}
