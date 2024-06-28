#include<iostream>
using namespace std;

// Base Class
class employee{
    
    public:
    int id;
    float salary;
    employee(int inpid){
        id = inpid;
        salary = 200000.0;
    }
    employee(){}     /*Default constructor*/
};

/*Derived Class Syntax
  class {{deived class name }} : {{visibility mode}}  {{base class name}}{
    class members/method ,etc.
  }
  Note::
  1.Default visibility mode is private
  2.Public visibility mode:Public members of the base class become the public member of the derived class
  3.Private visibility mode:Public members of the base class become the private members of the derived class
  4.Protected visibility mode:Private members (protected) of the base class become the private member of the derived class
  5.Private members are never inherited*/

  class programmer : /*public*/ employee{
    public:
    int languagecode;
    programmer(int inpid){
        id = inpid;
        languagecode = 9;
    }
    void getdata(){
        cout<<id<<endl;
        
    }
    
  };

int main(){
    // Inheritance
    // 1. Resuability is a very important feature of oops
    // 2.In C++ we can reuse a class and add additional features to it
    // 3.Reusing classes saves time and money
    // 4.Resuing already tested and debugged class will save a lot of effort of developing and debugging the same thing


    // -->The concept of resuability in C++ is supported using inheritance
    // -->We can reuse the properties of an existing class by inheriting from it
    // -->The existing class is called as the base class
    // -->The new class which is inherited is called as the derived class
    

    // -->Types of inheritance
    // 1.Single inheritance:A derived class with only one base class
    // 2.Multiple inheritance:A derived class with more than one  base class
    // 3.Hierarchical inheritance:Several derived class from a single class
    // 4.Multiple inheritance:A derived class with more than one base class
    // 5.Multilevel inheritance:deriving a class from already derived class
    // 6.Hybrid inheritance:A class derived from  two classes as in multiple inheritance
    // -->Hybrid inheritance is a combination of multiple inheritance and multilevel inheritance
    // -->However, one of the parent class is not a base class

    employee monu(2) , ketan(4);
    cout<<monu.salary<<endl;
    cout<<ketan.salary<<endl;
    programmer skill(2);
    cout<<skill.languagecode<<endl;
    skill.getdata();
    // skill.id;    This can be used when we give visibility mode to public


    return 0;
}