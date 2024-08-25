#include <iostream>
using namespace std;

void bubblesort(int arr[] , int n){

    for(int i = 0 ; i < n-1; i++){

        for(int j = 0; j < n-i-1; j++){

            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

int main()
{

    int arr[] = {1,5,8,7,5,3,4,8,7,9,41,5};

    bubblesort(arr , 12);

    for(int i = 0; i< 12 ; i++){
        cout<<arr[i]<<" ";
    }



    return 0;
}