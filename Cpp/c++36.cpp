#include<iostream>
using namespace std;

template<class T1 , class T2>
float average(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}
template<class T>
void swapp/*This is just a name*/(T &a , T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    float a , b;
    a = average(2,4);
    /*We can also use printf in place of cout*/
    printf("The average of these numbers is %.4f" /*We can use \n in this to break line*/ , a);
    cout<<endl;
    cout<<"The average of these numbers is "<<a<<endl;

    b = average(2,3.45);
    cout<<"The average of these numbers is "<<b<<endl;

    int x = 78;
    int y = 98;
    swapp(x,y);
    cout<<"The swapped value of x is "<<x<<endl<<"The swapped value of y is "<<y;



    return 0;
}