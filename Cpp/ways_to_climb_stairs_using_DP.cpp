#include <iostream>
#include<vector>
using namespace std;

int count(long long stairs , int i){

    if(i == stairs){
        return 1;
    }

    if(i > stairs){
        return 0;
    }

    return count(stairs , i+1) + count(stairs , i+2);

}


int main()
{
    long long stairs;
    cin>>stairs;
    
    cout<<count(stairs , 0);

    return 0;
}