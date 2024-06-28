#include<iostream>
using namespace std;

template<class T>
class monu{
    public:
    T data;
    monu(T a){
        data = a;
    }
    void display();
};

template<class T>
void monu<T> :: display(){
    cout<<data<<endl;
}

void function(int a ){
    cout<<"I am the first function "<<a<<endl;
}

template<class T>
void function(T a){
    cout<<"I am the templatised function "<<a<<endl;
}

template<class T>
void function1(T a){
    cout<<"I am the second templatised function "<<a<<endl;
}
int main(){
    monu<float> m(45.23);
    monu<char> n('f');
    cout<<m.data<<endl;
    m.display();
    cout<<n.data<<endl;

    function(7);  /*Exact match get the first priority. In this case the normal function match the given keyword in place of template function*/
    function1(9);  /*As function 1 contain only one data so it invoke it*/




    return 0;
}