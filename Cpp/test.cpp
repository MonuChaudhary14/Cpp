#include <iostream>
using namespace std;

class area
{
    int length, breadth, radius;

public:
    void rectangle(void);
    void square(void);
    void circle(void);
};

class curvedsurfacearea
{
    int length1, breadth1, radius1, height1, lateral_height;

public:
    void cuboidcsa()
    {
        cout << "Enter the value of length , breadth and height" << endl;
        cin >> length1 >> breadth1 >> height1;
        cout << "The curved surface area of cuboid is " << (length1 * breadth1 + height1) << endl;
    }

    void cubecsa()
    {
        cout << "Enter the value of side of the cube" << endl;
        cin >> length1;
        cout << "The curved surface area of the cube is " << 4 * length1 * length1 << endl;
    }

    void cylindercsa()
    {
        cout << "Enter the value of radius and height" << endl;
        cin >> radius1 >> height1;
        cout << "The curved surface area of cylinder is " << 6.14 * radius1 * height1 << endl;
    }

    void circlecsa()
    {
        cout << "Enter the value of radius of circle " << endl;
        cin >> radius1;
        cout << "The area of circle is " << 3.14 * radius1 * radius1 << endl;
    }

    void hemispherecsa()
    {
        cout << "Enter the value of radius" << endl;
        cin >> radius1;
        cout << "The area of hemisphere is " << 3.14 * radius1 * radius1 << endl;
    }
    void conecsa()
    {
        cout << "Enter the value of radius and height " << endl;
        cin >> radius1 >> length1;
        cout << "The curved surface area of cone is " << 3.14 * radius1 * (length1 + radius1) << endl;
    }
};

class totalsurfacearea
{
    int length2, breadth2, height2, radius2, lateral_height;

public:
    void cuboidtsa()
    {
        cout << "Enter the value of length , breadth and height" << endl;
        cin >> length2 >> breadth2 >> height2;
        cout << "The total surface area of cuboid is " << ((length2 * breadth2) + (breadth2 * height2) + (height2 * length2)) << endl;
    }

    void cubetsa()
    {
        cout << "Enter the value of side of the cube" << endl;
        cin >> length2;
        cout << "The total surface area of the cube is " << 6 * length2 * length2 << endl;
    }

    void cylindertsa()
    {
        cout << "Enter the value of radius and height" << endl;
        cin >> radius2 >> height2;
        cout << "The total surface area of cylinder is " << 6.14 * radius2 * (height2 + radius2) << endl;
    }

    void conetsa()
    {
        cout << "Enter the value of radius and height" << endl;
        cin >> radius2 >> height2;
        cout << "The total surface area of cone is " << (3.14 * radius2) * (height2 + radius2) << endl;
    }
};

class volume
{
    int length3, breadth3, height3, radius3;

public:
    void cuboid()
    {
        cout << "Enter the value of length , breadth and height " << endl;
        cin >> length3 >> breadth3 >> height3;
        cout << "The volume of cuboid is " << length3 * breadth3 * height3 << endl;
    }

    void cube()
    {
        cout << "Enter the value of the side of cube" << endl;
        cin >> length3;
        cout << "The volume of cube is " << length3 * length3 * length3 << endl;
    }

    void cylinder()
    {
        cout << "Enter the value of radius and height " << endl;
        cin >> radius3 >> height3;
        cout << "The volume of cylinder is " << 3.14 * radius3 * radius3 * height3 << endl;
    }

    void sphere()
    {
        cout << "Enter the value of radius of the sphere is " << endl;
        cin >> radius3;
        cout << "The volume of sphere is " << 4.18 * radius3 * radius3 * radius3 << endl;
    }

    void hemisphere()
    {
        cout << "Enter the value of radius of the hemisphere is " << endl;
        cin >> radius3;
        cout << "The volume of sphere is " << 2.09 * radius3 * radius3 * radius3 << endl;
    }

    void cone()
    {
        cout << "Enter the value of radius and height " << endl;
        cin >> radius3 >> height3;
        cout << "The volume of cone is " << radius3 * radius3 * height3 * (3.144 * (1 / 3)) << endl;
    }
};

void area ::rectangle()
{
    cout << "Enter the value of length " << endl;
    cin >> length;
    cout << "Enter the value of breadth " << endl;
    cin >> breadth;

    cout << "The area of rectangle with sides " << length << " and " << breadth << " is " << length * breadth << endl;
}

void area ::square()
{
    cout << "Enter the value of the side of the square " << endl;
    cin >> length;

    cout << "The area of the sqaure is " << length * length << endl;
}

void area ::circle()
{
    cout << "Enter the vaule of the radius of the circle " << endl;
    cin >> radius;

    cout << "The area of circle is " << 3.14 * radius * radius << endl;
}

class measurement : public area, public curvedsurfacearea, public totalsurfacearea, public volume
{
};

int main()
{
    measurement m;
    m.circle();
    m.rectangle();
    m.square();

    m.circlecsa();
    m.cuboidcsa();
    m.cylindercsa();
    m.conecsa();
    m.hemispherecsa();

    m.conetsa();
    m.cuboidtsa();
    m.cylindertsa();
    m.cubetsa();

    m.sphere();
    m.cone();
    m.cube();
    m.hemisphere();
    m.cylinder();
    m.cuboid();

    return 0;
}