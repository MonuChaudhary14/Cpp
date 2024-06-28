#include <iostream>
#include <cmath>
using namespace std;

class dist
{
    int x, y, s;

public:
    void setdata(void)
    {
        cout<<"Enter the coordinates of point "; 
        cin>>x>>y;
    }
    void display()
    {
        cout << "The distance between two points is " << s << endl;
    }

    friend int sumx(dist, dist);
    friend int sumy(dist, dist);
};

int sumx(dist d1, dist d2)
{
    return ((d1.x - d2.x) * (d1.x - d2.x));
}

int sumy(dist d1, dist d2)
{
    return ((d1.y - d2.y) * (d1.y - d2.y));
}

int main()
{
    dist d1, d2, d3;
    d1.setdata();
    d2.setdata();

    int d = sumx(d1, d2) + sumy(d1, d2);
    cout << d << endl;

    double e = sqrt(d);
    cout << e;

    return 0;
}