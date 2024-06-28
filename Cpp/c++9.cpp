#include<iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setid(void){
        salary = 450000;
        cout<<"Enter the id of the employee"<<endl;
        cin>>id;
    }
    void getid(void){
        cout<<"The id of the employee is "<<id<<endl;
    }
};

    class complex{
        int a;
        int b;
        public:
        void setdata(int v1, int v2)
        {
            a  = v1;
            b = v2;
        }
        void setdatabysum(complex o1, complex o2){
             a = o1.a + o2.a;
             b = o1.b + o2.b;
        }
        void printdata(){
            cout<<"Your complex number is "<<a<<" +i"<<b<<endl;
        }
    };
int main(){
    employee monu,ketan,prachi;
    // monu.setid();
    // monu.getid();
    employee fb[5];
    // fb[0].setid();
    // fb[0].getid();
    for (int i = 0; i<5;i++){
        fb[i].setid();
        fb[i].getid();  
    }
    complex c1, c2, c3;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(3,4);
    c2.printdata();
    
    c3.setdatabysum(c1,c2);
    c3.printdata();


    


    return 0;
}