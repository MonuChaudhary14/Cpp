#include <iostream>
using namespace std;

// template t1, t2;
// class nameofclass{};

template <class T1 , class T2> /*This means that there are some datatypes which we define later*/
class myclass
{
public:
    T1 data1;
    T2 data2;
    myclass(T1 a , T2 b ){
        data1 = a;
        data2 = b;
    }
    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main()
{
    myclass<int , char> obj(1,'m');   /*We can vary data type here */
    obj.display();

    myclass<char , float> sub('s' , 5.12);
    sub.display();

    

    return 0;
}