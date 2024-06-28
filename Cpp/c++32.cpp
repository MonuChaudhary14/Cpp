#include <iostream>
using namespace std;

// Template --> Parametrized class
// Template is used to make different classes
// Generic programming
// Used to follow DRY rule

// Syntax for template:
// template<class T>
// class vector {
// T * arr;       /*T can be int, float , double , etc.*/
// public:
// vector (T * ar){
// Code
// }
// };

class vector
{
public:
    int *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new int[size];
    }
    int dotproduct(vector &v)
    {
        int d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] *v.arr[i];
        }
        return d;
    }
};

int main()
{
    // vector<int> my vec (prt);
    // vector<float> my fvec(ptr);

    /*If we use fraction value then it doesnot give correct answer it take integer unless we give a command of float of template*/
    vector v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 3;
    v1.arr[2] = 7;

    vector v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 7;
    v2.arr[2] = 8;

    int a = v1.dotproduct(v2);
    cout << a << endl;

    return 0;
}