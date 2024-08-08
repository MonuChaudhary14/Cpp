#include <iostream>
using namespace std;

bool isHappy(int n)
{
    int ans = 0;

    if (n == 1)
    {
        return true; // Base case: n is already 1
    }

    bool arr[100000];

    for (int i = 0; i < 100000; ++i) {
        arr[i] = false;
    }

    while (n != 0 && ans != n)
    {
        int digit = n % 10;
        n = n / 10;
        ans = ans + digit * digit;

        if(arr[ans] == true){
            return false;
            break;
        }


        arr[ans] = true;



    }

    if (ans == 1)
    {
        return true; // Happy number
    }
    else
    {
        return isHappy(ans); // Recursive call
    }
}

int main()
{

    int n;
    cin >> n;

    if (isHappy(n))
    {
        cout << "Happy Number";
    }
    else
    {
        cout << "Unhappy Number";
    }

    return 0;
}