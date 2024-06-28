#include<iostream>
using namespace std;

    class base1{
        int data1;
        public:
        base1(int i){
        data1 = i;
        cout<<"Base1 class constructor called"<<endl;
        }
        void printdata1(){
            cout<<"The value of data 1 is "<<data1<<endl;
        }
    };

    class base2{
        int data2;
        public:
        base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printdata2(){
            cout<<"The value of data 2 is "<<data2<<endl;
        }
    };

    class derived : public base1 , public base2{   /*If we use base2 first it change the order*/
        int derived1, derived2;
        public:
        derived(int a , int b , int c , int d) : base1(a) , base2(b){ /*Nothing happen if base2 comes first*/
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        void printdata3(){
            cout<<"The value of derived 1 is "<<derived1<<endl;
            cout<<"The value of derived 2 is "<<derived2<<endl;
        }
    };

int main(){
    derived monu(4,5,6,7);
    monu.printdata1();
    monu.printdata2();
    monu.printdata3();


    return 0;
}