#include<iostream>
using namespace std;

template<class T1 = int , class T2 = float>
class monu{
    public:
    T1 a;
    T2 b;
    monu(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout<<"The vaue of a is "<<a<<endl;
        cout<<"The vaue of b is "<<b<<endl;
    }
};

int main(){
    monu</*This is left blank bacause we already given them above*/> m(4,6.56);
    m.display();
    cout<<endl;
    monu<float , char> k(5.45 , 'h');    /*We can change the data type if we have already given them*/
    k.display();

    return 0;
}