#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a letter ";
    char c;
    cin >> c;

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "This is vowel";
    }
    else
    {
        cout << "This is consonant";
    }
    return 0;
}