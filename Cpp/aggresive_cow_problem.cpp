#include <iostream>
using namespace std;  /*This code will only work on sorted array*/

bool ispossible(int arr[] , int n,int k , int mid){

    int cow = 1;
    int lastpos = arr[0];

    for(int i = 0; i < n ; i++){

        if(arr[i] - lastpos >= mid){
            cow++;

            if(cow == k){
                return true;
            }
            lastpos = arr[i];
        }
    }
    return false;
}

int aggresivecow(int arr[] ,int n, int k){

    int s = 0;

    int max1 = -1;

    for(int i = 0; i < n ; i++){
        max1 = max(max1 , arr[i]);
    }
    int e = max1;
    int ans = -1;

    int mid = s+(e-s)/2;

    while(s <= e){
        if(ispossible(arr,n, k , mid)){
            ans = mid;
            s= mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{

    int arr[] = {1,2,4,6,7,9};

    cout<<aggresivecow(arr , 6 , 2);

    return 0;
}