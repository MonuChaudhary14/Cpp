#include<iostream>
#include<cmath>
using namespace std;

class distan{
    float x1 , y1 , x2 , y2;
    public:
    void display(float a, float b, float c, float d){
        x1 = a;
        x2 = c;
        y1 = b;
        y2 = d;
        float q = (x1-x2)*(x1-x2);
        float w = (y1-y2)*(y1-y2);

        double e = sqrt(q+w);
        cout<<"The distance between two points is"<<e<<endl;
    }

};
int main(){
    cout<<"Enter the coordinates of first point"<<endl;
    float a, b;
    cin>>a>>b;
    cout<<"Enter the coordinates of second point"<<endl;
    float c,d;
    cin>>c>>d;

    distan l;
    l.display(a, b, c, d);

        
    return 0;
}