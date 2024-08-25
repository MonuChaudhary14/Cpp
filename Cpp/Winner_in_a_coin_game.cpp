#include <iostream>
using namespace std; /*Wrong code*/

string winner(int x, int y)
{
    int count = 0;

    if (x != 0 && y <= 4)
    {
        return "Alice";
    }

    if (x == 1 && y < 4)
    {
        return "Bob";
    }
    else if (x == 1 && y >= 4)
    {
        return "Alice";
    }

    while (x > 0 && y > 0)
    {
        x--;
        y--;
        y--;
        y--;
        y--;
        count++;
    }

    if (count & 1 == 1)
    {
        return "Bob";
    }
    else
    {
        return "Alice";
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    cout << winner(x, y);

    return 0;
}