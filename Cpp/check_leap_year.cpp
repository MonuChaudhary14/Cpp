#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the year" << endl;
    cin >> x;

    if ((x % 4 == 0) && (x % 100 == 0) && (x % 400 == 0))
    {
        cout << "This is a leap year";
    }

    else
    {
        cout << "This is not a leap year";
    }
    return 0;
}