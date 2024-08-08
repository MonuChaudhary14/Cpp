#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int n = digits.size();
    int carry = 1; // Initialize carry to 1 (since we're adding 1)

    for (int i = n - 1; i >= 0; i--)
    {
        int sum = digits[i] + carry;
        digits[i] = sum % 10; // Update the current digit
        carry = sum / 10;     // Calculate the carry for the next iteration
    }

    // If there's still a carry after processing all digits
    if (carry)
    {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

int main()
{

    return 0;
}