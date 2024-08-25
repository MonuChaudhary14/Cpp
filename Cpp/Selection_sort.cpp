#include <iostream>
using namespace std;

void selectionsort(int arr[] , int n){

    for(int i = 0 ; i < n-1; i++){
        int minindex = i;

        for(int j = i+1; j < n; j++){

            if(arr[j] < arr[minindex]){
                minindex = j;
            }   
        } 
        swap(arr[minindex] , arr[i]);
    }
}

int main()
{
    int arr[] = {4,5,2,7,8,65,2,7};

    selectionsort(arr , 8);

    for(int i = 0; i < 8 ; i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}