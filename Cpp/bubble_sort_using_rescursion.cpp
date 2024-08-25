#include <iostream>
using namespace std;

void sort(int arr[], int size){

    if(size == 0 || size == 1){
        return ;
    }

    for(int i = 0; i < size-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i] , arr[i+1]);
        }
    }

    sort(arr , size-1);
}

int main()
{
    int arr[] = {1,5,7,9,6,1};

    sort(arr, 6);

    for(int i = 0; i < 6; i++){
        cout<<arr[i];
    }

    return 0;
}