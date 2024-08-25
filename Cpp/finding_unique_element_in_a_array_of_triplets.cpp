#include <iostream>
using namespace std;

bool getbit(int n , int position){
    return ((n & (1 << position)) != 0);
}

bool setbit(int n , int position){
    return n | (1 << position);
}

int unique(int arr[] , int n){

int result = 0;

for(int i = 0; i < 64; i++){
    int sum = 0;

    for(int j = 0; j < n; j++){
        if(getbit(arr[j] , i)){
            sum++;
        }
    }
    if(sum % 3 != 0){
        result = setbit(result , i);
    }
}
return result;
}

int main()
{

    return 0;
}