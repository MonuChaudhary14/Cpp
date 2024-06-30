#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool e = 0;
    // cout<<"Enter a number ";
    // cin>>n;
    for(n  = 2; n <= 10 ; n++){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            // cout<<n<<" is not a prime number"<<endl;
            e  = 1;
            continue;
        }
    }
    
    if (e == 0){
        cout<<n<<" is a prime number"<<endl;
    }
    }


    

    return 0;
}

// Prime number from 1 to 100
// Sum of digitds of a number
// Reverse of a number
