#include <iostream>
#include<vector>
using namespace std;

int countprimes(int n){

    int count = 0;
    vector<bool> prime(n+1 , true);

    prime[0] = prime[1] = false;

    for(int i = 2; i < n; i++){

        if(prime[i]){
            count++;
            for(int j = 2*i; j < n; j++){
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main()
{

    cout<<countprimes(10);

    return 0;
}