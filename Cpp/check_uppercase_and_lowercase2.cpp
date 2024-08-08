#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if ((c >= 'a') && (c <= 'z'))
    {
        cout << "Lower";
    }

    else if ((c >= 'A') && (c <= 'A'))
    {
        cout << "Upper";
    }

    else if (c >= 0)
    {
        cout << "Number";
    }
    return 0;
}