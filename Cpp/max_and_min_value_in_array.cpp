#include <iostream>
#include<climits>
using namespace std;

int getmax(int num[] , int n){
    int max = INT_MIN;   /*We are first initilising the max to a lowest value and then update the value */

    for(int i = 0 ; i < n; i++){
        if(num[i] > max){
            max = num[i];
        }

        // max1 = max(max1 , num[i]);     We can use this in place of if condition.
        return max;
    }
}

int getmin(int num[] , int n){
    int min = INT_MAX; 

    for(int i = 0 ; i < n; i++){
        if(num[i] < min){
            min = num[i];
        }

        // min1 = min(min1, num[i]);
        return min;
    }
}



int main()
{
    int size;
    cin>>size;

    int num[100];

    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout<<"Maximum value is "<<getmax(num, size)<<endl;
    cout<<"Minimum value is "<<getmin(num, size)<<endl;

    return 0;
}