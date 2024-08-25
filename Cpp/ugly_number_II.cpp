#include <iostream>
#include<vector>
using namespace std;

int nthuglynumber(int n){

    vector<int> v(n);

    v[0] = 1;

    int next2 = 2;
    int next3 = 3;
    int next5 = 5;

    int i2 = 0;
    int i3 = 0;
    int i5 = 0;

    for(int i = 1; i < n; i++){

        int uglynumber = min(next2 , next3 ,next5);
        v[i] = uglynumber;

        if(uglynumber == next2){
            i2++;
            next2 = v[i2] * 2;
        }
        if(uglynumber == next3){
            i3++;
            next3 = v[i3] * 3;
        }
        if(uglynumber == next5){
            i5++;
            next5 = v[i5] * 5;
        }
    }

    return v[n-1];
}

int main()
{

    return 0;
}