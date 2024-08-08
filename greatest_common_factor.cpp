#include<iostream>
using namespace std;  

//    lcm(a,b) * gcf(a,b) = a*b

int gcd(int a , int b){

    if(a == 0){
        return b;
    }

    if(b == 0){
        return a;
    }

    // if(a == b){
    //     return a;
    // }

    while(a != b){

        if(a > b){
            a = a-b;
        }
        else if( a < b){
            b = b - a;
        }
    }
    return a;
}
 
int main(){

    int a , b;
    cin>>a>>b;

    cout<<gcd(a, b);
    
    return 0;
}