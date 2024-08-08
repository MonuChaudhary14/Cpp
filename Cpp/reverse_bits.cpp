#include <iostream>
using namespace std;

uint32_t reverseBits(uint32_t n)
{
    uint32_t result = 0;
    for (int i = 0; i < 32; ++i)
    {
        result = (result << 1) | (n & 1);
        n >>= 1;
    }
    return result;
}

int main()
{

    int n;
    cin >> n;

    cout << reverseBits(n);

    return 0;
}