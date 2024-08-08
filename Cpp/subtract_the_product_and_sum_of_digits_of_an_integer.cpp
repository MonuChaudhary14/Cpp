#include <iostream>
using namespace std;
class solution
{
public:
    int result(int n)
    {

        int product = 1;
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            product = product * digit;
            sum = sum + digit;

            n = n / 10;
        }
        int answer = product - sum;
        cout << answer;
        return answer;
    }
};

int main()
{
    int n;
    cin >> n;

    int c = n % 10;
    int d = n / 10;

    int e = d % 10;
    int f = d / 10;

    int g = f % 10;
    int h = f / 10;

    cout << (c * e * g) - (c + e + g);
    cout << endl;

    solution s;
    s.result(234);

    return 0;
}