#include<iostream>
using namespace std;

int power(int n , int m){

    if(m == 0){
        return 1;
    }
    else if( n == 1 || m == 1){
        return n;
    }

        return n * power(n , m-1);

    /*  we can also use this method int this method we check odd or even
    int ans = power(a , b/2);

    if(b % 2 == 0){
    return ans * ans;
    }

    else{
    return a * ans * ans;
    }


    */
}
 
int main(){
    int a , b;
    cin>>a>>b;

    cout<<power(a , b);
    
    return 0;
}