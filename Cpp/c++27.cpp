#include<iostream>
using namespace std;

class A{
    int a;
    public:
    // void setdata(int a){
    // this->a  = a;   /*We cannot use both same name without using this pointer*/ 
    // }
    // "This Pointer" is the keyword which is a pointer which points to the object which invokes the member function
      A & setdata(int a){       /*We can also use this method*/
    this->a = a;
    return *this;
    }

    void getdata(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    A a;
    a.setdata(6).getdata();    /*Also use this when we give return because setdata is giving a object*/
    // a.getdata();


    // Polymorphism
    // One name and multiple forms
    // Example--> Function overloading, operator overloading , virtual overloading
    // Types of polymorphism
    // 1.Compile time polymorphism or early binding or static binding
    // 2.Run time polymorphism or late binding

    // 1.Compile time--> In this we already know which function will work early.There is binding of function to code
    // Achieved by:- 1.Function Overloading
    //               2.Operator Overloading

    // 2.Run time--> In this the complier postpone the decision of which function will work first.
    //  This work in run time not in compile time. We get know which function is about to run after running the program not during the course
    // Achieved by:- Virtual functions
    

    return 0;  
}

  