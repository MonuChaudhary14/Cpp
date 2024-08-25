#include <iostream>
using namespace std;

int peak(int arr[] , int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        // else if(arr[mid] < arr[mid-1]){
        //     end = mid -1;
        // }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    cout<<start;
    return start;
}

int main()
{
    int arr[] = {1,2,3,4,5,2,1};
    int arr1[] = {1,8,7,6,5,4,1};

    peak(arr, 7);

    cout<<endl;

    peak(arr1 , 7);


    return 0;
}