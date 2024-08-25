#include<iostream>
using namespace std;

// In this we have to find x ^ n % m

int modularexponential(int x, int n , int m){
    int res = 1;

    while( n > 0){
        if(n & 1){  /*means odd*/
            res = ( 1LL * (res) * (x)%m)%m;
        }
        x = ( 1LL * (x)%m * (x)%m)%m;
        n = n >> 1;  /*means divide by 2*/
    }
    return res;
}
 
int main(){

    int x, n, m;
    cin>>x>>n>>m;

    
    cout<<modularexponential(x , n , m);


    
    return 0;
}