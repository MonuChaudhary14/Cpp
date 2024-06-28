#include<iostream>
using namespace std;
 class student{
    protected:
    int roll_number;
    public:
    void setrollnumber(int);
    void getrollnumber(void);
 };

 void student :: setrollnumber(int r){
    roll_number = r;
 }

 void student :: getrollnumber(void){
    cout<<"The roll no is. "<<roll_number<<endl;
 }

 class exam : public student{
    protected:
    float maths;
    float physics;

    public:
    void setmarks(float , float);
    void getmarks();
 };
 void exam :: setmarks(float m1 , float m2){
    maths = m1; 
    physics = m2;
 }

 void exam :: getmarks(){
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
 }

 class result : public exam{
    float percentage;
    public:
    void display(){
        getrollnumber();
        getmarks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"% "<<endl;

    }
 };

 int main(){
    result monu;
    monu.setrollnumber(40);
    monu.setmarks(99.0 , 96.0);
    monu.display();

    return 0;
 }

//  Note:
//  If we are inheriting B from A and C from B
//  1.A is the base class for B and B is the base class of C
//  2.A-->B-->C is called inheritance path
