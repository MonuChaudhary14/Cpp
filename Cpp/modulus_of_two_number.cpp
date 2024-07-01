// #include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
void update(int *a, int *b)
{
    int d = abs(*a + *b);
    int e = abs(*a - *b);
    cout << d << endl;
    cout << e << endl;
}

int main()
{

    int a, b;
    cin >> a;
    cin >> b;

    update(&a, &b);

    return 0;
}