#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter the value of a";
    cin >> a;
    cout << "Enter the value of b";
    cin >> b;

    for (int n = a; n <= b; n++)
    {
        if (n == 1)
        {
            cout << "one" << endl;
        }
        else if (n == 2)
        {
            cout << "two" << endl;
        }
        else if (n == 3)
        {
            cout << "three" << endl;
        }
        else if (n == 4)
        {
            cout << "four" << endl;
        }
        else if (n == 5)
        {
            cout << "five" << endl;
        }
        else if (n == 6)
        {
            cout << "six" << endl;
        }
        else if (n == 7)
        {
            cout << "seven" << endl;
        }
        else if (n == 8)
        {
            cout << "eight" << endl;
        }
        else if (n == 9)
        {
            cout << "nine" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "even" << endl;
        }
        else if (n % 2 == 1)
        {
            cout << "odd" << endl;
        }
        else if (n == b)
        {
            break;
        }
    }
    return 0;
}