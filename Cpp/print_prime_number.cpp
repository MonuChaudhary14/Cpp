#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int num);  /*It is a function which return bool*/

int main(){

    for (int i = 1; i < 100; i++)
    {
        if (is_prime(i))
        {
           cout<<i<<" -> ";
        }
        
    }
    cout<<"END";
    return 1;
}
    bool is_prime(int num){
        if (num==1)
            return true;
        if (num>1){
           for(int i=2;i<=(num/2);i++){
               if (num%i==0)
                   return false;
           }
        }
        return true;
    }

