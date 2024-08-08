#include <iostream>
using namespace std;

int main()
{
    int money, notes;
    cin >> money;

    cin >> notes;
    switch (notes)
    {

    case 100:
        notes = money / 100;
        cout << notes << " notes of 100" << endl;
        money = money - (100 * notes);
        // break;

    case 50:
        notes = money / 50;
        cout << notes << " notes of 50" << endl;
        money = money - (50 * notes);
        // break;

    case 20:
        notes = money / 20;
        cout << notes << " notes of 20" << endl;
        money = money - (20 * notes);
        // break;

    case 10:
        notes = money / 10;
        cout << notes << " notes of 10" << endl;
        money = money - (10 * notes);
        // break;
    }

    return 0;
}