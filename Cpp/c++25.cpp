#include<iostream>
using namespace std;
// Pointers to object
class complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }

    void setdata(int a , int b){
        real = a;
        imaginary = b;
    }


};
int main(){
    // complex c1;
    // complex *ptr = &c1;
    // c1.setdata(1,4);
    // c1.getdata();
// We can also use this
    // (*ptr).setdata(4,5);       /* () is compulsory because . operator has higher precendence than *operator */
    // (*ptr).getdata();

    complex *ptr  = new complex;
    // (*ptr).setdata(4,5);  is exactly same as
    ptr->setdata(1,8);     /*  -> This is arrow operator*/


    // (*ptr).getdata();  this is same as     Check this video no.51
      ptr->getdata(); 



          complex *ptr1  = new complex[4];
    ptr1->setdata(2,5);    
    ptr1->getdata();           



    
    return 0;
}