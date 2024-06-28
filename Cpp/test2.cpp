#include <iostream>
using namespace std;

class distance
{
    
    int a, b, c, d;

public:
    distance(int, int, int, int);

    void print(){
        cout<<p*p;
    }
};

distance ::distance(int x, int y, int z, int s)
{
    x = a;
    y = b;
    z = c;
    s = d;

    int m = (x - z) * (x - z);
    int n = (y - s) * (y - s);
    int p = m + n;

    cout<<"The distance between two point is "<<p*p;

}

int main()
{
    distance d1(4,5,6,7);
    d1.print();


    return 0;
}
