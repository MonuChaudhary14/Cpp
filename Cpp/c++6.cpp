#include<iostream>
using namespace std;
int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
int fibonacci(int m){
    if (m<2){
        return 1;
    }
    return fibonacci(m-2)+ fibonacci(m-1);
}

int sum (int x , int y){
    cout<<"The function with two arguments"<<endl;
    return x+y;
}

int sum (int x, int y,int z){
    cout<<"The function with 3 arguments"<<endl;
    return x+y+z;
}
// Calculate the volume of Cylinder
float volume(double r, int h){
return (3.14*r*r*h);
}


int main(){

int a;
cout<<"Enter the value of a ";
cin>>a;
cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
int b;
cout<<"Enter the value of b ";
cin>>b;
cout<<"The "<<b<<" term of the fibonacci series is "<<fibonacci(b)<<endl;



cout<<"The sum of 4,5 is "<<sum(4,5)<<endl;
cout<<"The sum of 5,8,7 is "<<sum(5,8,7)<<endl;

cout<<"The volume of cylinder is "<<volume(5,7);

    return 0;
}
