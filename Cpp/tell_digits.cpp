#include <iostream>
using namespace std;

int speak(int n, string arr[])
{

    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    n = n / 10;

    speak(n, arr);

    cout << arr[digit];
}

int main()
{

    string s[] = { "zero", ;
    "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

int n;
cin >> n;

speak(n, s);

return 0;
}