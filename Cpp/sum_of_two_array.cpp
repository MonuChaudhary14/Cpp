#include <iostream>
#include <climits>
using namespace std;

int findarraysum(int arr1[], int arr2[], int n, int m)
{

    int i = n - 1;
    int j = m - 1;
    int ans;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans = sum;
        i--;
        j--;
    }

    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans = sum;
        i--;
    }

    while (j >= 0)
    {
        int sum = arr2[j] + carry;
        carry = sum;
        sum = sum % 10;
        ans = sum;
        j--;
    }

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans = sum;
    }

    return ans;
}

int reverse(int n)
{
    int ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int a = n % 10;
        n = n / 10;
        ans = ans * 10 + a;
    }

    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
    {
        cout << "Error";
        return 0;
    }
    cout << ans;
    return ans;
}

int main()
{

    int arr1[] = {4, 5, 7, 8, 9, 6};
    int arr2[] = {1, 5, 7, 9, 3, 3};

    int ans = findarraysum(arr1, arr2, 6, 7);

    cout << reverse(ans);

    return 0;
}