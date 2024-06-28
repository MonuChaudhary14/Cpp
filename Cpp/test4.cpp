#include <iostream>
using namespace std;

class volume
{
    int length, breadth, height, radius;

public:
    volume(int l, int b, int h);
    volume(int r);
    volume(int r, int h);
    volume() {}
    void cube(int l);
    // {
    //     length = l;

    //     cout<<"The volume of cube is "<<l*l*l<<endl;
    // }

    void hemisphere(int r);
    // {
    //     radius = r;
    //     float c = (((2/3)*3.14)*r*r*r);
    //     cout<<"The volume of hemisphere is "<<c<<endl;
    // }

    void cone(int r, int h);
    // {
    //     radius = r;
    //     height = h;

    //     cout<<"The volume of cone is "<<(1/3)*(3.14*r*r*h)<<endl;
    // }
};

volume ::volume(int l, int b, int h)
{
    length = l;
    breadth = b;
    height = h;

    cout << "The volume of cuboid  is " << l * b * h << endl;
}

volume ::volume(int r)
{
    radius = r;

    cout << "The volume of sphere is " << 3.14 * r * r * r << endl;
}

volume ::volume(int r, int h)
{
    radius = r;
    height = h;

    cout << "The volume of cylinder is " << 3.14 * r * r * h << endl;
}

void volume ::cube(int l)
{
    length = l;

    cout << "The volume of cube is " << l * l * l << endl;
}

void volume ::hemisphere(int r)
{
    radius = r;

    cout << "The volume of hemisphere is " << 2.09 * r * r * r << endl;
}

void volume ::cone(int r, int h)
{
    radius = r;
    height = h;

    cout << "The volume of cone is " << 1.04 * r * r * h << endl;
}

int main()
{
    volume cone, cube, hemisphere;
    volume cuboid = volume(4, 5, 7);
    volume cylinder = volume(7, 5);
    volume sphere = volume(4);

    cone.cone(4, 6);
    cube.cube(4);
    hemisphere.hemisphere(7);

    return 0;
}

// Volume
// Sphere-->3.14*r*r*r
// Cylinder-->3.14*r*r*h
// Cone-->1/3*3.14*r*r*h
// Cube-->l*l*l
// Cuboid-->l*b*h
// Hemisphere-->2/3*3.14*r*r*r