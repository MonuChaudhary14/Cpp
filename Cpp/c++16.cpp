#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int years;
    float rate;
    float returnvalue;

public:
    bankdeposit() {} /*This give garbage value*/
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);

    void show();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate /*We can also use rate in place of r */);
    }
}

bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    rate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
void bankdeposit ::show()
{
    cout << "The return value is " << returnvalue;
}
int main()
{
    int p, y;
    float r;
    int R;
    bankdeposit b1, b2, b3;
    cout << "Enter the value of p , y , r ";
    cin >> p >> y >> r;
    b1 = bankdeposit(p, y, r);
    b1.show();
    cout << endl;
    cout << "Enter the value of p , y , R ";
    cin >> p >> y >> R;
    b2 = bankdeposit(p, y, R);
    b2.show();
    cout << endl;
    b3.show();

    return 0;
}