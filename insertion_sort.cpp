#include <iostream>
using namespace std;

void insertionsort(int arr[] , int n){

    for(int i = 1; i < n; i++){
        int temp = arr[i];

        int j = i-1;
        for(; j >= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {4,5,7,8,9,6,3,1,4,8,5};

    insertionsort(arr, 11);

    for(int i = 0; i < 11; i++){
        cout<<arr[i] <<" ";
    }

    return 0;
}