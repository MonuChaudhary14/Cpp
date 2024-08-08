#include <iostream>
using namespace std;

void rotate(int arr[] , int n  , int k){

    int temp[n];

    for(int i = 0; i < n; i++){
       temp[i] = arr[i];
    }   

    for(int j = 0; j < n; j++){

        temp[(j+k) % n] = arr[j];
    }
    arr = temp;
}

int main()
{
    int arr[] = {4,5,7,8,6,9};

    rotate(arr, 6 , 2);

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}