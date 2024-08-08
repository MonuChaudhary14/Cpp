#include <iostream>
using namespace std;

int partition(int arr[] , int start , int end){
    int pivot = arr[start];
    int count = 0;

    for(int i = start+1; i <= end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    // place pivot at right position
    int pivotindex = start + count;
    swap(arr[pivotindex]  , arr[start]);

    int i = start;
    int j = end;

    while(i < pivotindex && pivotindex < j){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] >= pivot){
            j--;
        }

        if(i < pivotindex && j > pivotindex){
            swap(arr[i++] , arr[j--]);
    }
    }
    return pivotindex;
}

void quicksort(int arr[] , int start, int end){

    if(start >= end){
        return ;
    }

    int p = partition(arr , start , end);

    // soting left part
    quicksort(arr , start , p-1);

    // sorting right part
    quicksort(arr , p+1 , end);

}

int main()
{

    int arr[] = {2,4,5,7,9,8};

    int n= 5;

    quicksort(arr , 0 , n-1);

    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}